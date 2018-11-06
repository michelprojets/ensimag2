drop table Navire cascade cosntraints purge;
drop table NavireTransport cascade cosntraints purge;
drop table NavireCombat cascade cosntraints purge;
drop table Pilote cascade cosntraints purge;
drop table Formation cascade cosntraints purge;
drop table Galaxie cascade cosntraints purge;
drop table Composition cascade cosntraints purge;
drop table Planete cascade cosntraints purge;
drop table Equipage cascade cosntraints purge;
drop table Mission cascade cosntraints purge;
drop table Est_Pilote cascade cosntraints purge;
drop table Cible cascade cosntraints purge;
drop table Resiste_A cascade cosntraints purge;
drop table Engage1 cascade cosntraints purge;
drop table Engage2 cascade cosntraints purge;
drop table Diplome1 cascade cosntraints purge;
drop table Diplome2 cascade cosntraints purge;

create table Navire
(
  CodeNav number(10),
  RayAct number(10),
  NbPilotes number(5),
  VMax float
  constraint pk_Navire_CodeNav primary key CodeNav not null,
);

create table NavireTransport
(
  CodeNavTransp number(10),
  RayAct number(10),
  NbPilotes number(5),
  VMax float,
  CapTransp number(5),
  constraint pk_NavireTransport_CodeNavTransp primary key CodeNavTransp not null,
);

create table NavireCombat
(
  CodeNavCombat number(10),
  RayAct float,
  NbPilotes number(5),
  VMax float,
  TailleMin number(5),
  TailleMax number(5),
  constraint pk_NavireCombat_CodeNavCombat primary key CodeNavCombat not null
);

create table Pilote
(
  CodePil number(10),
  NomPil varchar(15),
  PrenomPil varchar(15),
  AgePil number(3),
  GradePil varchar(15),
  constraint pk_Pilote_CodePil primary key CodePil not null
);

create table Formation
(
  TypeFormation varchar(15),
  constraint pk_Formation_TypeFormation primary key TypeFormation not null
);

create table Galaxie
(
  CodeGal number(10),
  NomGal varchar(15),
  DistGal number(10),
  constraint pk_Galaxie_CodeGal primary key CodeGal not null,
);

create table Composition
(
  TypeComp varchar(15),
  constraint pk_Composition_TypeComp primary key TypeComp not null
);

create table Planete
(
  CodeGal number(10),
  CodePlan number(10),
  NomPlan varchar(15),
  VLibPlan float,
  SoumPlan char(1),
  typeComp varchar(15),
  constraint pk_Planete_CodeGal_CodePlan primary key (CodeGal, CodePlan) not null,
  constraint fk_Planete_CodeGal foreign key CodeGal references Galaxie(CodeGal),
  constraint fk_Planete_TypeComp foreign key TypeComp references Composition(typeComp),
  constraint ck_Planete_SoumPlan check(SoumPlan in ('o', 'n'))
);

create table Equipage
(
  CodeEq number(10),
  EffectifEq number(5),
  constraint pk_Equipage_CodeEq primary key CodeEq not null
)

create table Mission
(
  CodeMiss number(10),
  TypeMiss varchar(15),
  DateMiss date,
  NbNavMiss number(5),
  VMinMiss float,
  RayEngMiss float,
  TypeFormation varchar(15),
  constraint pk_Mission_CodeMiss primary key CodeMiss not null,
  constraint fk_Mission_TypeFormation foreign key TypeFormation references Formation(TypeFormation)
);

create table Est_Pilote
(
  CodeNav number(10),
  CodePil number(10),
  constraint pk_Est_Pilote_CodeNav primary key CodeNav not null,
  constraint pk_Est_Pilote_CodePil primary key CodePil not null,
  constraint fk_Est_Pilote_CodeNav foreign key CodeNav references Navire(CodeNav),
  constraint fk_Est_Pilote_CodePil foreign key CodePil references Pilote(CodePil)
);(num)

create table Cible
(
  CodeMiss number(10),
  CodeGal number(10),
  CodePlan number(10),
  constraint pk_Cible_CodeMiss_CodeGal_CodePlan primary key (CodeMiss, CodeGal, CodePlan) not null,
  constraint fk_Cible_CodeMiss foreign key CodeMiss references Mission(CodeMiss),
  constraint fk_Cible_CodeGal foreign key CodeGal references Galaxie(CodeGal),
  constraint fk_Cible_CodePlan foreign key CodePlan references Planete(CodePlan)
);

create table Resiste_A
(
  CodeNav number(10),
  TypeComp varchar(15),
  constraint pk_Resiste_A_CodeNav_TypeComp primary key (CodeNav, CodeGal) not null,
  constraint fk_Resiste_A_CodeNav foreign key CodeNav references Navire(CodeNav),
  constraint fk_Resiste_A_TypeComp foreign key TypeComp references Composition(TypeComp)
);

create table Engage1
(
  CodeNav number(10),
  CodePil number(10),
  CodeMiss number(10),
  constraint pk_Engage1_CodeNav_CodePil_CodeMiss primary key (CodeNav, CodePil, CodeMiss) not null,
  constraint fk_Engage1_CodeNav foreign key CodeNav references Navire(CodeNav),
  constraint fk_Engage1_CodePil foreign key CodePil references Pilote(CodePil),
  constraint fk_Engage1_CodeMiss foreign key CodeMiss references Mission(CodeMiss)
);

create table Engage1
(
  CodeNavCombat number(10),
  CodeMiss number(10),
  CodeEq number(10),
  constraint pk_Engage2_CodeNavCombat_CodeMiss_CodeEq primary key (CodeNavCombat, CodeMiss, CodeEq) not null,
  constraint fk_Engage2_CodeNavCombat foreign key CodeNavCombat references NavireCombat(CodeNavCombat),
  constraint fk_Engage2_CodeMiss foreign key CodeMiss references Mission(CodeMiss),
  constraint fk_Engage2_CodeEq foreign key CodeEq references Equipage(CodeEq)
);

create table Diplome1
(
  CodePil number(10),
  TypeFormation varchar(15),
  constraint pk_Diplome1_CodePil_TypeFormation primary key (CodePil, TypeFormation) not null,
  constraint fk_Diplome1_CodePil foreign key CodePil references Pilote(CodePil),
  constraint fk_diplome1_TypeFormation foreign key TypeFormation references Formation(TypeFormation)
);

create table Diplome2
(
  CodeEq number(10),
  TypeFormation varchar(15),
  constraint pk_Diplome2_CodeEq_TypeFormation primary key (CodeEq, TypeFormation) not null,
  constraint fk_Diplome2_CodeEq foreign key CodePil references Equipage(CodeEq),
  constraint fk_diplome2_TypeFormation foreign key TypeFormation references Formation(TypeFormation)
);
