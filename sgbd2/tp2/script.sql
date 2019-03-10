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
DROP TYPE T_operation;
DROP TYPE NT_ens_compte;
DROP TYPE NT_ensRef_estSignataire;
DROP TYPE NT_ens_operation;

-- création des tables et des types --

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
	MEMBER FUNCTION nbSignataire() RETURN INTEGER,
	MEMBER FUNCTION estTitulaire(cli IN NUMBER) RETURN BOOLEAN
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
    estSignataire NT_ensRef_estSignataire,
	MEMBER FUNCTION nbCepargne() RETURN INTEGER
);
/
show errors;

CREATE TABLE compte OF T_compte;

ALTER TABLE compte ADD CONSTRAINT pk_compte PRIMARY KEY (nCompte);

CREATE TABLE client OF T_client
    nested table estProprietaire store as lesComptes,
    nested table estSignataire store as lesCptCourants;
	
ALTER TABLE compte ADD CONSTRAINT pk_compte PRIMARY KEY (nCompte);
	
commit;
	
-- question 2 --

-- a) --

INSERT INTO client VALUES('56', 'Paturel', null, 'Port-Royal - Paris',
							null, V_ens_telephone('0447569816'),
							NT_ens_compte(), NT_ensRef_estSignataire());

commit;

-- b) --

INSERT INTO Compte VALUES T_cptCourant('56', '0', SYSDATE, '0', NT_ens_operation());

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '56')
VALUES(T_cptCourant('56', '0', SYSDATE, '0', NT_ens_operation()));

commit;

-- c) --

INSERT INTO TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '56')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), null, '50.00'));

UPDATE TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '56')
SET nbMouvements = '1';

commit;

-- on peuple la base de données --

-- ajout de clients --

INSERT INTO client VALUES('1', 'Jean', 'Paul', 'Adresse1',
							null, V_ens_telephone('0600000001'),
							NT_ens_compte(), NT_ensRef_estSignataire());

commit;
							
INSERT INTO client VALUES('2', 'Patrick', 'Christophe', 'Adresse2',
							null, V_ens_telephone('0600000002'),
							NT_ens_compte(), NT_ensRef_estSignataire());
	
commit;
	
INSERT INTO client VALUES('3', 'David', 'Louis', 'Adresse3',
							null, V_ens_telephone('0600000003'),
							NT_ens_compte(), NT_ensRef_estSignataire());
							
commit;

-- ajout de comptes --

-- le client 1 possède le compte 1 (compte courant) --

INSERT INTO Compte VALUES T_cptCourant('1', '0', SYSDATE, '0', NT_ens_operation());

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptCourant('1', '0', SYSDATE, '0', NT_ens_operation()));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '1')
VALUES(NT_ensRef_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '1'), 'droit1'));

INSERT INTO TABLE(SELECT CPT.estSignataire FROM compte CPT WHERE CPT.nCompte = '1')
VALUES(NT_ensRef_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '1'), 'droit1'));

commit;

-- le client 2 possède le compte 2 (compte épargne) --

INSERT INTO Compte VALUES T_cptEpargne('2', '0', SYSDATE, '5.00');

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '2')
VALUES(T_cptEpargne('2', '0', SYSDATE, '5.00'));

commit;

-- le client 2 possède le compte 3 (compte épargne) --

INSERT INTO Compte VALUES T_cptEpargne('3', '0', SYSDATE, '10.00');

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '2')
VALUES(T_cptEpargne('3', '0', SYSDATE, '10.00'));

commit;

-- le client 1 possède le compte 4 (compte courant) --
-- le compte 4 a pour signataires les clients 1 et 3 --

INSERT INTO Compte VALUES T_cptCourant('4', '0', SYSDATE, '0', NT_ens_operation());

INSERT INTO TABLE(SELECT C.estProprietaire FROM client C WHERE C.nClient = '1')
VALUES(T_cptCourant('4', '0', SYSDATE, '0', NT_ens_operation()));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '1')
VALUES(NT_ensRef_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '4'), 'droit2'));

INSERT INTO TABLE(SELECT CPT.estSignataire FROM compte CPT WHERE VALUE(CPT) CPT.nCompte = '4')
VALUES(NT_ensRef_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '1'), 'droit2'));

INSERT INTO TABLE(SELECT C.estSignataire FROM client C WHERE C.nClient = '3')
VALUES(NT_ensRef_estSignataire((select REF(CPT) FROM compte CPT WHERE CPT.nCompte = '4'), 'droit3'));

INSERT INTO TABLE(SELECT CPT.estSignataire FROM compte CPT WHERE CPT.nCompte = '4')
VALUES(NT_ensRef_estSignataire2((select REF(C) FROM client C WHERE C.nClient = '3'), 'droit3'));

commit;
			
-- ajout de mouvements --

INSERT INTO TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '1'), null, '20.00'));

UPDATE TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
SET nbMouvements = '1';

commit;

INSERT INTO TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), null, '25.00'));

UPDATE TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
SET nbMouvements = '2';

commit;

INSERT INTO TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
VALUES(T_operation((select REF(C) FROM client C WHERE C.nClient = '56'), null, '15.00'));

UPDATE TABLE(SELECT C.operation FROM compte C WHERE C.nClient = '1')
SET nbMouvements = '3';

commit;

-- question 3 --

-- nbCepargne --

CREATE OR REPLACE TYPE BODY T_client AS
  MEMBER FUNCTION nbCepargne() RETURN INTEGER IS
  nbc INTEGER;
  BEGIN
    select COUNT(CPT.nCompte) into nbc
    from client C, TABLE(C.estProprietaire) CPT
    where self.nClient = C.nClient and 
			VALUE(CPT) IS OF (cptEpargne);
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
  MEMBER FUNCTION nbSignataire() RETURN INTEGER IS
  nbs INTEGER;
  BEGIN
    select COUNT(S.refClient) into nbs
    from compte CPT, TABLE(CPT.estSignataire) S
    where self.nCompte = CPT.nCompte;
    IF nbs > 0 THEN
      RETURN nbs;
	ELSE
	  RETURN 0;
    END IF;
  END;
  -- estTitulaire --
  MEMBER FUNCTION estTitulaire(cli IN NUMBER) RETURN BOOLEAN IS
  nbc INTEGER;
  BEGIN
    select COUNT(CPT.nCompte) into nbc
    from client C, TABLE(C.estProprietaire) CPT
    where self.nCompte = CPT.nCompte and
			cli = C.nClient;
    IF nbc > 0 THEN
      RETURN TRUE;
	ELSE
	  RETURN FALSE;
    END IF;
  END;
END;
/
show errors;

commit;

-- test des methodes --

SELECT C.nbCepargne() FROM client C WHERE C.nClient = '2';
-- doit retourner 2 --

SELECT CPT.nbSignataire() FROM compte CPT WHERE CPT.nCompte = '4';
-- doit retourner 2 --

SELECT CPT.estTitulaire('1') FROM compte CPT WHERE CPT.nCompte = '1';
-- doit retourner TRUE --

SELECT CPT.estTitulaire('3') FROM compte CPT WHERE CPT.nCompte = '1';
-- doit retourner FALSE --

-- question 4 --

-- 1) --

SELECT C.nClient, C.nom, C.prenom, C.adresse, C.email

-- 2) --



-- 3) --



-- 4) --



-- 5) --



-- 6) --



-- 7) --



-- 8) --



-- 9) --



-- 10) --

