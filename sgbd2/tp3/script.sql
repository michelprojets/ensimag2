drop table commandes;
drop table commandes_i;
drop table commandes_h;
drop table commandes_g;
drop table commandes_f;
drop table commandes_e;
drop table commandes_d;
drop table commandes_c;
drop table commandes_b;
drop table commandes_a;
drop table clients_i;
drop table clients_h;
drop table clients_g;
drop table clients_f;
drop table clients_e;
drop table clients_d;
drop table clients_c;
drop table clients_b;
drop table clients_a;

create table clients_a as select * from TP.clients;
create table clients_b as select * from TP.clients;
create table clients_c as select * from TP.clients;
create table clients_d as select * from TP.clients;
create table clients_e as select * from TP.clients;
create table clients_f as select * from TP.clients;
create table clients_g as select * from TP.clients;
create table clients_h as select * from TP.clients;
create table clients_i as select * from TP.clients;
create table commandes_a as select * from TP.commandes;
create table commandes_b as select * from TP.commandes;
create table commandes_c as select * from TP.commandes;
create table commandes_d as select * from TP.commandes;
create table commandes_e as select * from TP.commandes;
create table commandes_f as select * from TP.commandes;
create table commandes_g as select * from TP.commandes;
create table commandes_h as select * from TP.commandes;
create table commandes_i as select * from TP.commandes;

-- ########################### question 1 ########################### --

-- en cas d'index primaires, le tuple est stocke dans l'index, on utilise --
-- le plus possible ces index avant de traverser les pointeurs --
-- en cas d'index secondaires, la reference est stockee dans l'index --
-- il y a traversee de pointeurs --
-- index sur le champ qui est le plus utilise (trivial lorsqu'il n'y a qu'une --
-- seule requete)
-- des qu'il y a plusieurs requetes imbriquees, il faut trouver un compromis --
-- mais le cout de calcul affiche est le cout d'execution de la requete alors --
-- qu'il faudrait aussi prendre en compte le cout d'optimisation (qui est plus --
-- eleve plus il y a d'index) --

-- a) aucun index --

explain
select co.nocomm, co.datecomm
from clients_a cl, commandes_a co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	15134.199000 --

-- b) 3 index secondaires --

create index index_clients_b_codeclient on clients_b(codeclient);
create index index_clients_b_contact on clients_b(contact);
create index index_commandes_b_codeclient on commandes_b(codeclient);

explain
select co.nocomm, co.datecomm
from clients_b cl, commandes_b co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	7.999000 --

-- c) 1 index primaire et 2 index secondaires --

create index index_clients_c_codeclient on clients_c(codeclient);
alter table clients_c add primary key (contact);
create index index_commandes_c_codeclient on commandes_c(codeclient);

explain
select co.nocomm, co.datecomm
from clients_c cl, commandes_c co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	6.799000 --

-- d) 1 index primaire et 1 index secondaire --

alter table clients_d add primary key (codeclient);
create index index_clients_d_contact on clients_d(contact);

explain
select co.nocomm, co.datecomm
from clients_d cl, commandes_d co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	176.199000 --

-- e) 1 index primaire et 2 index secondaires --

alter table clients_e add primary key (codeclient);
create index index_clients_e_contact on clients_e(contact);
create index index_commandes_e_codeclient on commandes_e(codeclient);

explain
select co.nocomm, co.datecomm
from clients_e cl, commandes_e co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	5.999000 --
-- moins eleve que c) car on a mis un index primaire sur le champ le moins utilise
-- (entre cpdeclient et contact) et comme il y a traversee de reference, --
-- prend moins de temps --

-- f) 1 index secondaire triple et 2 index secondaires --

create index index_commandes_f_codeclient_datecomm_nocomm
                on commandes_f(codeclient, datecomm, nocomm);
create index index_clients_f_codeclient on clients_f(codeclient);
create index index_clients_f_contact on clients_f(contact);

explain
select co.nocomm, co.datecomm
from clients_f cl, commandes_f co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	4.012126 --

-- g) 1 index secondaire triple (ordre modifie) et 2 index secondaires --

create index index_commandes_g_datecomm_nocomm_codeclient
                on commandes_g(datecomm, nocomm, codeclient);
create index index_clients_g_codeclient on clients_g(codeclient);
create index index_clients_g_contact on clients_g(contact);

explain
select co.nocomm, co.datecomm
from clients_g cl, commandes_g co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	169.199000 --
-- cout plus eleve que g) car on index d'abord sur datecomm donc traversee de
-- pointeur contrairement a g) ou on index d'abord sur codeclient --

-- h) 1 index primaire double et 1 index secondaire --

alter table clients_h add primary key (codeclient, contact);
create index index_commandes_h_codeclient on commandes_h(codeclient);

explain
select co.nocomm, co.datecomm
from clients_h cl, commandes_h co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	350.399000 --

-- i) 1 index primaire double (ordre modifie) et 1 index secondaire --

alter table clients_i add primary key (contact, codeclient);
create index index_commandes_i_codeclient on commandes_h(codeclient);

explain
select co.nocomm, co.datecomm
from clients_i cl, commandes_i co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

show status like 'last_query_cost';

-- Last_query_cost	168.199000 --

-- ########################### question 2 ########################### --


drop table employes_j;
drop table messagers_j;
drop table fournisseurs_j;
drop table categories_j;
drop table produits_j;
drop table detailcomm_j;
drop table commandes_j;
drop table clients_j;

create table clients_j as select * from TP.clients;
create table commandes_j as select * from TP.commandes;
create table detailcomm_j as select * from TP.detailcomm;
create table produits_j as select * from TP.produits;
create table categories_j as select * from TP.categories;
create table fournisseurs_j as select * from TP.fournisseurs;
create table messagers_j as select * from TP.messagers;
create table employes_j as select * from TP.employes;

alter table clients_j add primary key (codeclient);
alter table employes_j add primary key (noemp);
alter table messagers_j add primary key (nomsgr);
alter table categories_j add primary key (nocat);
alter table commandes_j add primary key (nocomm);
alter table fournisseurs_j add primary key (nofourn);
alter table produits_j add primary key (refprod);
create index index_detailcomm_j on detailcomm_j(refprod);
create index index_categories_j_nocat_nom on categories_j(nom);
create index index_commandes_j on commandes_j(noemp, nomsgr, codeclient);
create index index_fournisseurs_j on fournisseurs_j(pays, contact);
create index index_produits_j on produits_j(nofourn, prixunit);

-- 1) --

explain
select cl.codeclient, cl.societe, cl.ville, cl.pays
from clients_j cl, commandes_j co
where cl.codeclient = co.codeclient
      and YEAR(co.datecomm) = '1997';

show status like 'last_query_cost';

-- 2) --

explain
select pr.refprod, pr.nom, pr.prixunit, ca.nom
from produits_j pr, categories_j ca
where pr.nocat = ca.nocat
      and pr.prixunit >= '80' and pr.prixunit <= '100';

show status like 'last_query_cost';

-- 3) --

explain
select pr.refprod, pr.nom, ca.nom, fo.contact
from produits_j pr, categories_j ca, fournisseurs_j fo
where pr.nocat = ca.nocat and pr.nofourn = fo.nofourn
order by ca.nom, pr.refprod, fo.contact, pr.nom;
show status like 'last_query_cost';

-- beaucoup plus rapide qu'avec "order by ca.nom" seulement, pourquoi ? --

-- 4) --

-- resultat : 53 tuples --

explain
select de.nocomm, pr.nom, de.prixunit, em.nom, fo.societe, me.nom
from clients_j cl, commandes_j co, produits_j pr, fournisseurs_j fo,
      detailcomm_j de, employes_j em, messagers_j me
where pr.refprod = de.refprod and pr.nofourn = fo.nofourn and em.noemp = co.noemp
      and co.nomsgr = me.nomsgr
      and fo.pays = 'Italie';

show status like 'last_query_cost';

-- requetes  clients  commandes produits  fournisseurs  categories  detailcomm  employes  messagers --
-- R1        X        X                                                                             --
-- R2                           X                       X                                           --
-- R3                           X         X             X                                           --
-- R4        X        X         X         X                         X           X         X         --

-- il faut traiter d'abord les requetes qui utilise des champs isoles --
-- (concernant l'ajout d'index) --

-- sans rien
-- 15134.199000 126.799000 3623.799000 1963682834813.999000

-- create index index_categories_j_nocat on categories_j(nocat);
-- 15134.199000 110.199000 3137.399000 1963682834813.999000

-- create index index_client_j_codeclient on clients_j(codeclient);
-- create index index_detailcomm_j_refprod on detailcomm_j(refprod);
-- create index index_employes_j_noemp on employes_j(noemp);
-- create index index_messagers_j_nomsgr on messagers_j(nomsgr);
-- create index index_categories_j_nocat_nom on categories_j(nocat, nom);
-- create index index_commandes_j on commandes_j(datecomm);
-- create index index_fournisseurs_j on fournisseurs_j(nofourn, contact, pays);
-- create index index_produits_j on produits_j(nofourn, nocat, prixunit);
-- 2000.999000 108.799000 105.399000 136894108.799000

-- alter table clients_j add primary key (codeclient);
-- create index index_detailcomm_j_refprod on detailcomm_j(refprod);
-- alter table employes_j add primary key (noemp);
-- alter table messagers_j add primary key (nomsgr);
-- create index index_categories_j_nocat_nom on categories_j(nocat, nom);
-- create index index_commandes_j on commandes_j(datecomm);
-- create index index_fournisseurs_j on fournisseurs_j(nofourn);
-- create index index_produits_j on produits_j(nofourn);
-- 1170.999000 108.799000 105.399000 17094446.399000

-- alter table clients_j add primary key (codeclient);
-- create index index_detailcomm_j_refprod on detailcomm_j(refprod);
-- alter table employes_j add primary key (noemp);
-- alter table messagers_j add primary key (nomsgr);
-- create index index_categories_j_nocat_nom on categories_j(nocat, nom);
-- create index index_commandes_j on commandes_j(codeclient, noemp, nomsgr);
-- create index index_fournisseurs_j on fournisseurs_j(nofourn);
-- create index index_produits_j on produits_j(nofourn, refprod);
-- 546.999000 108.799000 105.399000 17094446.399000

-- alter table clients_j add primary key (codeclient);
-- alter table employes_j add primary key (noemp);
-- alter table messagers_j add primary key (nomsgr);
-- alter table categories_j add primary key (nocat);
-- alter table commandes_j add primary key (nocomm);
-- alter table fournisseurs_j add primary key (nofourn);
-- alter table produits_j add primary key (refprod);
-- create index index_detailcomm_j on detailcomm_j(refprod);
-- create index index_categories_j_nocat_nom on categories_j(nom);
-- create index index_commandes_j on commandes_j(codeclient, noemp, nomsgr);
-- create index index_fournisseurs_j on fournisseurs_j(pays, contact);
-- create index index_produits_j on produits_j(nofourn, prixunit);
-- 546.999000 108.799000 105.399000 1180475.199000

-- inversion create index index_commandes_j on commandes_j(noemp, nomsgr, codeclient);
-- 1169.999000 108.799000 105.399000 194722.810110
