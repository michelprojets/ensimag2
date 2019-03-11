-- Michel Yoeung (2A ISI ENSIMAG) --

-- question 1 --

-- nettoyage des tables et des types --

DROP TABLE compte;
DROP TABLE client;

DROP TYPE V_ens_telephone FORCE;
DROP TYPE T_telephone;
DROP TYPE T_cptEpargne;
DROP TYPE T_cptCourant FORCE;
DROP TYPE T_compte FORCE;
DROP TYPE T_client FORCE;
DROP TYPE T_estSignataire;
DROP TYPE T_estSignataire2;
DROP TYPE T_operation;
DROP TYPE NT_ens_compte;
DROP TYPE NT_ensRef_estSignataire;
DROP TYPE NT_ensRef_estSignataire2;
DROP TYPE NT_ens_operation;

-- création des tables et des types --

CREATE TYPE T_telephone AS OBJECT(
    numTel varchar(10)
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

CREATE OR REPLACE TYPE T_estSignataire2 AS OBJECT(
    refClient ref T_client,
    droit varchar(20)
);
/
show errors;

CREATE OR REPLACE TYPE NT_ensRef_estSignataire2 AS table OF T_estSignataire2;
/
show errors;

CREATE OR REPLACE TYPE T_cptCourant UNDER T_compte(
    nbMouvements number(10),
    operation NT_ens_operation,
  	estSignataire NT_ensRef_estSignataire2,
  	MEMBER FUNCTION nbSignataire RETURN INTEGER,
  	MEMBER FUNCTION estTitulaire(cli IN NUMBER) RETURN VARCHAR
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
    refCptCourant ref T_compte, -- TODO CHANGER EN ref T_cptCourant ? (COMMENT REF UN SUBTYPE) --
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
    estSignataire NT_ensRef_estSignataire,
	  MEMBER FUNCTION nbCepargne RETURN INTEGER
);
/
show errors;

CREATE TABLE compte OF T_compte;

ALTER TABLE compte ADD CONSTRAINT pk_compte PRIMARY KEY (nCompte);

CREATE TABLE client OF T_client
    nested table estProprietaire store as lesComptes,
    nested table estSignataire store as lesCptCourants;

ALTER TABLE client ADD CONSTRAINT pk_client PRIMARY KEY (nClient);

commit;

-- question 2 --

-- a) --

INSERT INTO client
VALUES('56', 'Paturel', null, 'Port-Royal - Paris',
			 null, V_ens_telephone(T_telephone('0447569816')),
			 NT_ens_compte(), NT_ensRef_estSignataire());

commit;

-- b) --

INSERT INTO Compte
VALUES (T_cptCourant('56', '0.00', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '56')
VALUES(T_cptCourant('56', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

commit;

-- c) --

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).operation FROM compte CPT WHERE CPT.nCompte = '56')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), null, '50.00'));

-- TODO A CORRIGER (UPDATE AVEC ATTRIBUT DU SUBTYPE) --
-- UPDATE (SELECT TREAT(VALUE(C) AS T_cptCourant) FROM compte C) --
-- SET nbMouvements = '1' WHERE nCompte = '56'; --

commit;

-- on peuple la base de données --

-- ajout de clients --

INSERT INTO client VALUES('1', 'Jean', 'Paul', 'Adresse1',
							'jean@gmail.com', V_ens_telephone(T_telephone('0600000001')),
							NT_ens_compte(), NT_ensRef_estSignataire());

commit;

INSERT INTO client VALUES('2', 'Patrick', 'Christophe', 'Adresse2',
							'patrick@gmail.com', V_ens_telephone(T_telephone('0600000002')),
							NT_ens_compte(), NT_ensRef_estSignataire());

commit;

INSERT INTO client VALUES('3', 'David', 'Louis', 'Adresse3',
							'louis@gmail.com', V_ens_telephone(T_telephone('0600000003')),
							NT_ens_compte(), NT_ensRef_estSignataire());

commit;

-- ajout de comptes --

-- le client 1 possède le compte 1 (compte courant) --

INSERT INTO Compte
VALUES(T_cptCourant('1', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptCourant('1', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '1')
VALUES(T_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '1'), 'droit client 1'));

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).estSignataire FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(T_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '1'), 'droit client 1'));

commit;

-- le client 2 possède le compte 2 (compte épargne) --

INSERT INTO Compte
VALUES(T_cptEpargne('2', '0', SYSDATE, '5.00'));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '2')
VALUES(T_cptEpargne('2', '0', SYSDATE, '5.00'));

commit;

-- le client 2 possède le compte 3 (compte épargne) --

INSERT INTO Compte
VALUES(T_cptEpargne('3', '0', SYSDATE, '10.00'));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '2')
VALUES(T_cptEpargne('3', '0', SYSDATE, '10.00'));

commit;

-- le client 1 possède le compte 4 (compte courant) --
-- le compte 4 a pour signataires les clients 1 et 3 --

INSERT INTO Compte
VALUES(T_cptCourant('4', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptCourant('4', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '1')
VALUES(T_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '4'), 'droit client 1'));

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).estSignataire FROM compte CPT WHERE CPT.nCompte = '4')
VALUES(T_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '1'), 'droit client 1'));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '3')
VALUES(T_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '4'), 'droit client 3'));

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).estSignataire FROM compte CPT WHERE CPT.nCompte = '4')
VALUES(T_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '3'), 'droit client 3'));

commit;

-- le client 1 possède le compte 5 (compte épargne) --

INSERT INTO Compte
VALUES(T_cptEpargne('5', '0', SYSDATE, '2.00'));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptEpargne('5', '0', SYSDATE, '3.00'));

commit;

-- le client 1 possède le compte 6 (compte courant) --

INSERT INTO Compte
VALUES(T_cptCourant('6', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptCourant('6', '0', SYSDATE, '0', NT_ens_operation(), NT_ensRef_estSignataire2()));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '1')
VALUES(T_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '1'), 'droit4'));

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).estSignataire FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(T_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '1'), 'droit4'));

commit;

-- ajout de mouvements --

-- les clients de numéro 1 et 56 ont fait des opérations sur le compte courant numéro 1 --

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).operation FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '1'), SYSDATE, '20.00'));

-- TODO A CORRIGER (UPDATE AVEC ATTRIBUT DU SUBTYPE) --
-- PDATE (SELECT TREAT(VALUE(C) AS T_cptCourant) FROM compte C) --
-- SET nbMouvements = '1' WHERE nCompte = '1'; --

commit;

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).operation FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), SYSDATE, '25.00'));

-- TODO A CORRIGER (UPDATE AVEC ATTRIBUT DU SUBTYPE) --
-- UPDATE (SELECT TREAT(VALUE(C) AS T_cptCourant) FROM compte C) --
-- SET nbMouvements = '2' WHERE nCompte = '1'; --

commit;

INSERT INTO TABLE(SELECT TREAT(VALUE(CPT) AS T_cptCourant).operation FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), SYSDATE, '15.00'));

-- TODO A CORRIGER (UPDATE AVEC ATTRIBUT DU SUBTYPE) --
-- UPDATE (SELECT TREAT(VALUE(C) AS T_cptCourant) FROM compte C) --
-- SET nbMouvements = '3' WHERE nCompte = '1'; --

commit;

-- question 3 --

-- nbCepargne --

CREATE OR REPLACE TYPE BODY T_client AS
  MEMBER FUNCTION nbCepargne RETURN INTEGER IS
  nbc INTEGER;
  BEGIN
    select COUNT(CPT.nCompte) into nbc
    from client C, TABLE(C.estProprietaire) CPT
    where self.nClient = C.nClient and
			VALUE(CPT) IS OF (T_cptEpargne);
    IF nbc IS NULL THEN
      RETURN 0;
    END IF;
	RETURN nbc;
  END;
END;
/
show errors;

commit;

CREATE OR REPLACE TYPE BODY T_cptCourant AS
  -- nbSignataire --
  MEMBER FUNCTION nbSignataire RETURN INTEGER IS
  nbs INTEGER;
  BEGIN
    select COUNT(S.refClient) into nbs
    from compte CPT, TABLE(TREAT(VALUE(CPT) AS T_cptCourant).estSignataire) S
    where self.nCompte = CPT.nCompte;
    IF nbs > 0 THEN
      RETURN nbs;
	ELSE
	  RETURN 0;
    END IF;
  END;
  -- estTitulaire --
  MEMBER FUNCTION estTitulaire(cli IN NUMBER) RETURN VARCHAR IS
  nbc INTEGER;
  BEGIN
    select COUNT(CPT.nCompte) into nbc
    from client C, TABLE(C.estProprietaire) CPT
    where self.nCompte = CPT.nCompte and
			cli = C.nClient;
    IF nbc > 0 THEN
      RETURN 'TRUE';
	ELSE
	  RETURN 'FALSE';
    END IF;
  END;
END;
/
show errors;

commit;

-- test des methodes --

SELECT C.nbCepargne() FROM client C WHERE C.nClient = '2';
-- doit retourner 2 --

SELECT TREAT(VALUE(CPT) AS T_cptCourant).nbSignataire() FROM compte CPT WHERE CPT.nCompte = '4';
-- doit retourner 2 --

SELECT TREAT(VALUE(CPT) AS T_cptCourant).estTitulaire('1') FROM compte CPT WHERE CPT.nCompte = '1';
-- doit retourner TRUE --

SELECT TREAT(VALUE(CPT) AS T_cptCourant).estTitulaire('3') FROM compte CPT WHERE CPT.nCompte = '1';
-- doit retourner FALSE --

-- question 4 --

-- 1) --

SELECT C.nClient, C.nom, C.prenom, C.adresse, C.email
FROM client C;

-- 2) --

SELECT TREAT(VALUE(CPT) AS T_cptEpargne).nCompte, TREAT(VALUE(CPT) AS T_cptEpargne).solde,
       TREAT(VALUE(CPT) AS T_cptEpargne).dateOuv, TREAT(VALUE(CPT) AS T_cptEpargne).taux
FROM compte CPT
WHERE VALUE(CPT) IS OF (T_cptEpargne);

-- 3) --

-- MODIFICATION DE L'ENONCE : CLIENT NUMERO 1 A LA PLACE --
SELECT CPT.nCompte, CPT.solde, CPT.dateOuv, TREAT(VALUE(CPT) AS T_cptCourant).nbMouvements
FROM client C, TABLE(C.estProprietaire) CPT
WHERE C.nClient = '1' and VALUE(CPT) IS OF (T_cptCourant);

-- 4) --

SELECT C.nClient, C.nom, C.adresse
FROM client C
WHERE C.nbCepargne() = '1';

-- 5) --

SELECT C.nClient, C.nom, C.nbCepargne() AS nb_comptes_epargnes
FROM client C;

-- 6) --

SELECT C.nClient, C.nom, C.nbCepargne()
FROM client C
WHERE C.nbCepargne() = (SELECT MAX(C.nbCepargne())
                        FROM client C);

-- 7) --

-- MODIFICATION DE L'ENONCE : COMPTE COURANT NUMERO 1 A LA PLACE --
SELECT C.nClient, C.nom, O.dateMouv, O.montant
FROM client C, compte CPT, TABLE(TREAT(VALUE(CPT) AS T_cptCourant).operation) O
WHERE CPT.nCompte = '1' and O.refClient = REF(C);

-- 8) --

-- MODIFICATION DE L'ENONCE : COMPTE COURANT NUMERO 1 A LA PLACE --
-- AJOUT DU NUMERO DE CLIENT DANS LE SELECT POUR VERIFIER --
SELECT O.dateMouv, O.montant, C.nClient
FROM client C, compte CPT, TABLE(TREAT(VALUE(CPT) AS T_cptCourant).operation) O
WHERE CPT.nCompte = '1' and O.refClient = REF(C)
      and TREAT(VALUE(CPT) AS T_cptCourant).estTitulaire(C.nClient) = 'FALSE';


-- 9) --

SELECT T.numTel
FROM client C, TABLE(C.possede) T
WHERE C.nClient = '56';

-- 10) --

-- MODIFICATION DE L'ENONCE : COMPTE COURANT NUMERO 4 A LA PLACE --
SELECT C.nClient, C.adresse, S.droit
FROM client C, compte CPT, TABLE(TREAT(VALUE(CPT) AS T_cptCourant).estSignataire) S
WHERE CPT.nCompte = '4' AND S.refClient = REF(C);
