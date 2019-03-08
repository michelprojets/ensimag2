DROP TABLE compte;
DROP TABLE client;

DROP TYPE V_ens_telephone FORCE;
DROP TYPE T_telephone;
DROP TYPE T_cptEpargne;
DROP TYPE T_cptCourant FORCE;
DROP TYPE T_compte FORCE;
DROP TYPE T_client FORCE;
DROP TYPE T_estSignataire;
DROP TYPE T_operation;
DROP TYPE NT_ens_compte;
DROP TYPE NT_ensRef_estSignataire;
DROP TYPE NT_ens_operation;

CREATE TYPE T_telephone AS OBJECT(
    numTel number(10)
);
/
show errors;

CREATE OR REPLACE TYPE V_ens_telephone AS VARRAY(3) OF T_telephone;
/
show errors;

CREATE OR REPLACE TYPE T_compte AS OBJECT(
    nCompte number(10),
    solde number(10,2),
    dateOuv date
)
NOT FINAL;
/
show errors;

-- prédéclaration--
CREATE TYPE T_client;
/
show errors;

CREATE OR REPLACE TYPE T_operation AS OBJECT(
    refClient ref T_client,
    dateMouv date,
    montant number(10,2)
);
/
show errors;

CREATE OR REPLACE TYPE NT_ens_operation AS table OF T_operation;
/
show errors;

CREATE OR REPLACE TYPE T_cptCourant UNDER T_compte(
    nbMouvements number(10),
    operation NT_ens_operation
);
/
show errors;

CREATE OR REPLACE TYPE T_cptEpargne UNDER T_compte(
    taux number(10,2)
);
/
show errors;

CREATE OR REPLACE TYPE NT_ens_compte AS table OF T_compte;
/
show errors;

CREATE OR REPLACE TYPE T_estSignataire AS OBJECT(
    refCptCourant ref T_cptCourant,
    droit varchar(20)
);
/
show errors;

CREATE OR REPLACE TYPE NT_ensRef_estSignataire AS table OF T_estSignataire;
/
show errors;

CREATE OR REPLACE TYPE T_client AS OBJECT(
    nClient number(10),
    nom varchar(20),
    prenom varchar(20),
    adresse varchar(20),
    email varchar(20),
    possede V_ens_telephone,
    estProprietaire NT_ens_compte,
    estSignataire NT_ensRef_estSignataire
);
/
show errors;

CREATE TABLE compte OF T_compte;

CREATE TABLE client OF T_client
    nested table estProprietaire store as lesComptes,
    nested table estSignataire store as lesCptCourants;
