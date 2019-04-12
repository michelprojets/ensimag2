-- index secondaire trié ;
-- create [unique] index
-- indes primaire :
-- cluster : structure physique indexé (sur un ou plusieurs attributs) dans
-- laquelle on stocke des tables
-- sur oracle, dès qu'on créé une clé primaire, oracle créé un index secondaire dessus

-- ########################### question 1 ########################### --

-- a) --

drop table clients_a;
create table clients_a as select * from clients;

drop table commandes_a;
create table commandes_a as select * from commandes;

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_a cl, commandes_a co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_a');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_a');

-- b) --

drop table clients_b;
create table clients_b as select * from clients;

drop table commandes_b;
create table commandes_b as select * from commandes;

create index index_clients_b_codeclient on clients_b(codeclient);
create index index_clients_b_contact on clients_b(contact);
create index index_commandes_b_codeclient on commandes_b(codeclient);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_b cl, commandes_b co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_b');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_b');

-- c) --

drop cluster cluster_clients_c_codeclient including tables;
create cluster cluster_clients_c_codeclient (codeclient char(5));
create index index_clients_c_codeclient on cluster cluster_clients_c_codeclient;
create table clients_c cluster cluster_clients_c_codeclient(codeclient)
as select * from clients;

drop table commandes_c;
create table commandes_c as select * from commandes;

create index index_clients_c_contact on clients_c(contact);
create index index_commandes_c_codeclient on commandes_c(codeclient);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_c cl, commandes_c co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_c');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_c');

-- d) --

drop cluster cluster_clients_d_contact including tables;
create cluster cluster_clients_d_contact (contact varchar2(30));
create index index_clients_d_contact on cluster cluster_clients_d_contact;
create table clients_d cluster cluster_clients_d_contact(contact)
as select * from clients;

drop table commandes_d;
create table commandes_d as select * from commandes;

create index index_clients_d_codeclient on clients_d(codeclient);
create index index_commandes_d_codeclient on commandes_d(codeclient);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_d cl, commandes_d co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_d');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_d');

-- e) --

drop cluster cluster_clients_e_commandes_e including tables;
create cluster cluster_clients_e_commandes_e (codeclient char(5));
create index index_clients_e_commandes_e on cluster cluster_clients_e_commandes_e;
create table clients_e cluster cluster_clients_e_commandes_e(codeclient)
as select * from clients;
create table commandes_e cluster cluster_clients_e_commandes_e(codeclient)
as select * from commandes;

create index index_clients_e_contact on clients_e(contact);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_e cl, commandes_e co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_e');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_e');

-- f) --

drop cluster cluster_clients_f_contact including tables;
create cluster cluster_clients_f_contact (contact varchar2(30)) hashkeys 100;
create table clients_f cluster cluster_clients_f_contact(contact)
as select * from clients;

drop table commandes_f;
create table commandes_f as select * from commandes;

create index index_clients_f_codeclient on clients_f(codeclient);
create index index_commandes_f_codeclient on commandes_f(codeclient);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_f cl, commandes_f co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_f');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_f');

-- g) --

drop cluster cluster_clients_g_codeclient including tables;
create cluster cluster_clients_g_codeclient (codeclient char(5)) hashkeys 10000;
create table clients_g cluster cluster_clients_g_codeclient(codeclient)
as select * from clients;

drop table commandes_g;
create table commandes_g as select * from commandes;

create index index_clients_g_contact on clients_g(contact);
create index index_commandes_g_codeclient on commandes_g(codeclient);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_g cl, commandes_g co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_g');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_g');

-- h) --

drop cluster cluster_clients_h_commandes_h including tables;
create cluster cluster_clients_h_commandes_h (codeclient char(5)) hashkeys 10000;
create table clients_h cluster cluster_clients_h_commandes_h(codeclient)
as select * from clients;
create table commandes_h cluster cluster_clients_h_commandes_h(codeclient)
as select * from commandes;

create index index_clients_h_contact on clients_h(contact);

set autotrace on explain;

select co.nocomm, co.datecomm
from clients_h cl, commandes_h co
where cl.codeclient = co.codeclient
      and cl.contact = 'Thomas Hardy';

set autotrace off;

execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_h');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_h');

-- ########################### question 2 ########################### --

drop table employes_i;
drop table messagers_i;
drop table fournisseurs_i;
drop table categories_i;
drop table produits_i;
drop table detailcomm_i;
drop table commandes_i;
drop table clients_i;

drop cluster cluster_employes_i_comm_i including tables;
create cluster cluster_employes_i_comm_i (noemp int) hashkeys 10000;
create table employes_i cluster cluster_employes_i_comm_i(noemp)
as select * from employes;
create table commandes_i cluster cluster_employes_i_comm_i(noemp)
as select * from commandes;

drop cluster cluster_detailcomm_i_prod_i including tables;
create cluster cluster_detailcomm_i_prod_i (refprod int) hashkeys 10000;
create table detailcomm_i cluster cluster_detailcomm_i_prod_i(refprod)
as select * from detailcomm;
create table produits_i cluster cluster_detailcomm_i_prod_i(refprod)
as select * from produits;

drop cluster cluster_categories_i_nocat including tables;
create cluster cluster_categories_i_nocat (nocat int) hashkeys 10000;
create table categories_i cluster cluster_categories_i_nocat(nocat)
as select * from categories;

drop cluster cluster_fournisseurs_i_pays including tables;
create cluster cluster_fournisseurs_i_pays (pays varchar2(15)) hashkeys 10000;
create table fournisseurs_i cluster cluster_fournisseurs_i_pays(pays)
as select * from fournisseurs;

drop cluster cluster_clients_i_codecl including tables;
create cluster cluster_clients_i_codecl (codeclient char(5)) hashkeys 10000;
create table clients_i cluster cluster_clients_i_codecl(codeclient)
as select * from clients;

drop cluster cluster_messagers_i_nomsgr including tables;
create cluster cluster_messagers_i_nomsgr (nomsgr int) hashkeys 10000;
create table messagers_i cluster cluster_messagers_i_nomsgr(nomsgr)
as select * from messagers;

create index index_produits_i on produits_i(nocat);

create index index_commandes_i_nomsgr on commandes_i(nomsgr);

create index index_fournisseurs_i_nofourn on fournisseurs_i(nofourn);

create index index_commandes_i_datecomm on commandes_i(datecomm);

create index index_clients_i_codeclient on clients_i(codeclient);

-- where cl.codeclient = co.codeclient
--       and YEAR(co.datecomm) = '1997';
-- where pr.nocat = ca.nocat
--       and pr.prixunit >= '80' and pr.prixunit <= '100';
-- where pr.nocat = ca.nocat and pr.nofourn = fo.nofourn
-- order by ca.nom
-- where pr.refprod = de.refprod and pr.nofourn = fo.nofourn and em.noemp = co.noemp
--       and co.nomsgr = me.nomsgr
--       and fo.pays = 'Italie';
-- index primaire hash = em.noemp / co.noemp
--                       de.refprod / pr.refprod
--                       ca.nocat / fo.pays / cl.codeclient / me.nomsgr
-- index primaire trié = pr.prixunit ?
-- index secondaire = pr.nocat / co.nomsgr / fo.nofourn / co.datecomm / co.codeclient

set autotrace on explain;

-- 1) --

select cl.codeclient, cl.societe, cl.ville, cl.pays
from clients_i cl, commandes_i co
where cl.codeclient = co.codeclient
      and YEAR(co.datecomm) = '1997';

execute DBMS_STATS.delete_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'messagers_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'messagers_i');

-- 2) --

select pr.refprod, pr.nom, pr.prixunit, ca.nom
from produits_i pr, categories_i ca
where pr.nocat = ca.nocat
      and pr.prixunit >= '80' and pr.prixunit <= '100';

execute DBMS_STATS.delete_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'messagers_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'messagers_i');

-- 3) --

select pr.refprod, pr.nom, ca.nom, fo.contact
from produits_i pr, categories_i ca, fournisseurs_i fo
where pr.nocat = ca.nocat and pr.nofourn = fo.nofourn
order by ca.nom, pr.refprod, fo.contact, pr.nom;

execute DBMS_STATS.delete_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'messagers_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'messagers_i');

-- 4) --

select de.nocomm, pr.nom, de.prixunit, em.nom, fo.societe, me.nom
from clients_i cl, commandes_i co, produits_i pr, fournisseurs_i fo,
      detailcomm_i de, employes_i em, messagers_i me
where pr.refprod = de.refprod and pr.nofourn = fo.nofourn and em.noemp = co.noemp
      and co.nomsgr = me.nomsgr
      and fo.pays = 'Italie';
      
set autotrace off;

execute DBMS_STATS.delete_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.delete_table_stats('YOEUNGM', 'messagers_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'clients_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'commandes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'produits_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'fournisseurs_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'categories_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'detailcomm_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'employes_i');
execute DBMS_STATS.gather_table_stats('YOEUNGM', 'messagers_i');

-- requetes  clients  commandes produits  fournisseurs  categories  detailcomm  employes  messagers --
-- R1        X        X                                                                             --
-- R2                           X                       X                                           --
-- R3                           X         X             X                                           --
-- R4        X        X         X         X                         X           X         X         --

-- 13459
