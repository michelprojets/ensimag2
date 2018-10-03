-- partie 1 (atomicité) --

-- exercice 1 (annulation de transaction) --

-- nouvelle transaction après chaque connexion ou commit ou rollback

create sequence NC_seq start with 1 increment by 1;

create table comptes
(
    NC number(10) primary key not null,
    Nom varchar(10),
    Solde float default (0.0), -- doit être toujours positif (unsigned ?)
    constraint ck_solde check(Solde >= 0.0)
);

alter table comptes add constraint ck_solde check(Solde >= 0.0);

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '100.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '200.50');

select SUM(Solde) from comptes;

rollback;

-- rollback annule la transaction

-- exercice 2 (validation de transaction) --

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Pierre', '100.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Pierre', '200.50');

commit;

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '10.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '20.50');

select SUM(Solde) from comptes;

rollback;

select SUM(Solde) from comptes;

-- commit permet de faire une sauvegarde

-- exercice 3 (validation automatique) --

set autocommit on; -- validation (sauvegarde) automatique

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jacques', '30.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jacques', '40.50');

select SUM(Solde) from comptes;

rollback;

-- sauvegarde automatique donc on annule rien

set autocommit off; -- annulation de la validation automatique

-- exercice 4 (point de sauvegarde) --

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jean', '50.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jean', '60.50');

savepoint DeuxInserts; -- on place un point de sauvegarde avec un nom spécifié

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jean', '70.50');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Jean', '80.50');

select SUM(Solde) from comptes where Nom = 'Jean';

rollback to DeuxInserts; -- on revient à la sauvegarde au nom spécifié --

-- annule bien les deux dernières insert into

rollback;

-- annule toutes les créations de la transaction (les comptes de nom 'Jean')

-- partie 2 (cohérence) --

-- exercice 1 --

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Claude', '100');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Henri', '200');

update comptes set Solde = Solde + 50 where Nom = 'Henri';
-- on peut incrémenter car ne viole pas la contrainte d'intégrité

update comptes set Solde = Solde - 150 where Nom = 'Claude';
-- on ne peut pas décrémenter car on viole la contrainte d'intégrité

-- henri : 250 et claude : 100

rollback;

-- il ne reste plus les comptes ni de Claude ni de Henri

-- on refait en faisant un commit au lieu de rollback
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Claude', '100');
insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Henri', '200');
update comptes set Solde = Solde + 50 where Nom = 'Henri';
update comptes set Solde = Solde - 150 where Nom = 'Claude';
commit;

-- partie 3 (isolation) --

-- exercice 1 (niveau d'isolation : read commited) --

-- ouverture de deux connexions S1 et S2 à oracle sous le même login

delete from comptes where Nom='Jacques'; -- dans S1

-- dans S2 il y a toujours les comptes de Jacques

update comptes set Solde = Solde + 10000; -- dans S2

-- processus mis en attente, pas possible de créditer tous les comptes car S1
-- est en cours de transaction sur une même ressource partagée : tous les comptes

commit; -- dans S1

-- dès qu'on a validé la transaction dans S1, les crédits ont été faits dans S2
-- et la maj faite dans S1 sont visibles dans S2

commit; -- dans S2

-- exercice 2 (niveau d'isolation : serializable)

select SUM(Solde) from comptes; -- dans S1

set transaction isolation level serializable; -- dans S2 -- on change de niveau d'isolation (juste pour la transaction en cours)

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '500'); -- dans S2

select SUM(Solde) from comptes; -- dans S1

-- la somme des soldes ne change pas dans S1 car transaction non validée dans S2

commit; -- dans S2

-- la somme des soldes change dans S1 dès qu'on valide dans S2

commit; -- dans S1

set transaction isolation level serializable; -- dans S2

select SUM(Solde) from comptes; -- dans S2

insert into comptes(NC, Nom, Solde) values (NC_seq.nextval, 'Paul', '1000'); -- dans S1

select SUM(Solde) from comptes; -- dans S2

-- la somme des soldes dans S2 ne change pas car S1 n'a pas encore validé la transaction

commit; -- dans S1

-- la somme des soldes dans S2 ne change toujours pas car S2 n'a lui-même pas encore validé la transaction

commit; -- dans S2

-- après la validation de la transaction par S2, la somme des soldes a changé

-- exercice 3 (interblocage) --

update comptes set Solde = Solde + 100 where Nom='Paul'; -- dans S1

update comptes set Solde = Solde + 50 where Nom='Pierre'; -- dans S2

-- on peut augmenter les soldes dans S1 et S2 car les deux ensembles des comptes qui sont augmentés sont disjoints

update comptes set Solde = Solde - 100 where Nom='Pierre'; -- dans S1

-- on ne peut pas diminuer le solde de Pierre dans S1 car ressource partagée déjà vérouillée par S2 : les comptes de Pierre

update comptes set Solde = Solde + 200 where Nom='Paul'; -- dans S2

-- on ne peut pas augmenter le solde de Paul dans S2 car ressource partagée déjà vérouillée par S1 : les comptes de Paul
-- interblocage "deadlock detected while waiting for resource" dans S1
-- S2 toujours en attente

commit; -- dans S1

-- S1 valeurs non changées
-- S2 peut faire son update : +300 pour paul dans S2 car la requête +100 pour paul dans S1 a été validée, ainsi que la requête +200 pour paul dans S2 (après résolution de l'interblocage)

commit; -- dans S2

-- S2 valeurs non changées (normal)
-- S1 maj des valeurs de S1 (qu'on retrouve dans S2)

-- on refait les mêmes étapes mais on annule la transaction dans S2 au lieu de valider et on valide dans S1
update comptes set Solde = Solde + 100 where Nom='Paul'; -- dans S1
update comptes set Solde = Solde + 50 where Nom='Pierre'; -- dans S2
update comptes set Solde = Solde - 100 where Nom='Pierre'; -- dans S1
update comptes set Solde = Solde + 200 where Nom='Paul'; -- dans S2

rollback; -- dans S2

-- si on annule la transaction dans S2, maj des valeurs dans S2 (qu'on retrouve dans S1)

-- on refait les mêmes étapes mais on annule la transaction dans S1 au lieu de valider et on valide dans S2
update comptes set Solde = Solde + 100 where Nom='Paul'; -- dans S1
update comptes set Solde = Solde + 50 where Nom='Pierre'; -- dans S2
update comptes set Solde = Solde - 100 where Nom='Pierre'; -- dans S1
update comptes set Solde = Solde + 200 where Nom='Paul'; -- dans S2

rollback; -- dans S1

commit; -- dans S2

-- si on annule la transaction dans S1 mais qu'on valide dans S2, maj des valeurs dans S1 (qu'on retrouve dans S2)

-- on refait les mêmes étapes mais on annule les transactions dans S1 et S2
update comptes set Solde = Solde + 100 where Nom='Paul'; -- dans S1
update comptes set Solde = Solde + 50 where Nom='Pierre'; -- dans S2
update comptes set Solde = Solde - 100 where Nom='Pierre'; -- dans S1
update comptes set Solde = Solde + 200 where Nom='Paul'; -- dans S2

rollback; -- dans S1

rollback; -- dans S2

-- si on annule les transactions dans S1 et S2, reset les valeurs jusqu'au début
