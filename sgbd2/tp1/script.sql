DROP TABLE client CASCADE CONSTRAINT PURGE;
DROP TABLE fichier CASCADE CONSTRAINT PURGE;
DROP TABLE album CASCADE CONSTRAINT PURGE;

DROP FUNCTION verif_DL;
DROP FUNCTION verif_photo
DROP PROCEDURE ajoute_photo;
DROP FUNCTION match;
DROP PROCEDURE set_couverture;

DROP TYPE T_album;
DROP TYPE NT_photos;
DROP TYPE T_photo;
DROP TYPE T_dimensions;
DROP TYPE T_client;

CREATE OR REPLACE TYPE T_client AS OBJECT(
    email varchar(20),
    nom varchar(20),
    prenom varchar(20),
    adresse varchar(20),
    passwd varchar(20),
    STATIC FUNCTION verif_DL(ref_cli REF T_client) RETURN INTEGER
)
NOT FINAL;
/
show errors;

CREATE TABLE client OF T_client;

ALTER TABLE client ADD CONSTRAINT pk_client PRIMARY KEY (email);

INSERT INTO client VALUES('pierre@gmail.com', 'pierre', 'paul', '1 rue ...', 'aaaaa');
INSERT INTO client VALUES('jacques@gmail.com', 'jacques', 'david', '2 rue ...', 'bbbbb');
INSERT INTO client VALUES('patrick@gmail.com', 'patrick', 'jean', '3 rue ...', 'ccccc');

CREATE OR REPLACE TYPE T_dimensions AS OBJECT(
    largeur number(10),
    hauteur number(10),
    ORDER MEMBER FUNCTION MATCH(d T_dimensions) RETURN INTEGER
)
NOT FINAL;
/
show errors;

CREATE OR REPLACE TYPE BODY T_dimensions AS
  ORDER MEMBER FUNCTION MATCH(d T_dimensions) RETURN INTEGER IS
  BEGIN
    IF largeur < d.largeur THEN
      RETURN -1;
    ELSIF largeur > d.largeur THEN
      RETURN 1;
    ELSIF hauteur < d.hauteur THEN
      RETURN -1;
    ELSIF hauteur > d.hauteur THEN
      RETURN 1;
    ELSE
      RETURN 0;
    END IF;
  END;
END;
/
show errors;

CREATE TABLE fichier(
    chemin varchar(20) primary key,
    appareil varchar(20),
    objectif varchar(20),
    focale varchar(20),
    ISO varchar(20),
    ouverture varchar(20),
    vitesse number(10),
    client ref T_client,
    dimensions T_dimensions
);

INSERT INTO fichier VALUES('chemin 1', 'appareil 1', 'objectif 1',
                'focale 1', 'ISO 1', 'ouverture 1', '5',
                (select REF(C) from client C where C.email = 'pierre@gmail.com'),
                T_dimensions('10', '20'));
INSERT INTO fichier VALUES('chemin 2', 'appareil 2', 'objectif 2',
                'focale 2', 'ISO 2', 'ouverture 2', '5',
                (select REF(C) from client C where C.email = 'jacques@gmail.com'),
                T_dimensions('5', '40'));
INSERT INTO fichier VALUES('chemin 3', 'appareil 3', 'objectif 3',
                'focale 3', 'ISO 3', 'ouverture 3', '5',
                (select REF(C) from client C where C.email = 'jacques@gmail.com'),
                T_dimensions('10', '60'));

select C.email, F.dimensions.hauteur, F.dimensions.largeur
from fichier F, client C
where REF(C) = F.client;

select F.chemin, C.nom, C.prenom
from fichier F, client C
where REF(C) = F.client;

CREATE OR REPLACE TYPE T_photo AS OBJECT(
    numPhoto number(10),
    titrephoto varchar(20),
    commentaire varchar(20),
    chemin varchar(20)
)
NOT FINAL;
/
show errors;

CREATE OR REPLACE TYPE NT_photos AS table OF T_photo
NOT FINAL;
/
show errors;

CREATE OR REPLACE TYPE T_album AS OBJECT(
    idalbum number(10),
    titre varchar(20),
    soustitre varchar(20),
    photos NT_photos,
    STATIC FUNCTION verif_photo(ref_album REF T_album) RETURN INTEGER,
    MEMBER PROCEDURE ajoute_photo(chemin_photo varchar, titre_photo varchar,
                                commentaire_photo varchar)
)
NOT FINAL;
/
show errors;

CREATE TABLE album OF T_album
  nested table photos store as LesPhotos;

ALTER TABLE album ADD CONSTRAINT pk_album PRIMARY KEY (idalbum);

INSERT INTO album VALUES('1', 'album 1', 'sous titre 1',
                NT_photos(T_photo('1', 'photo 1', 'commentaire 1', 'chemin 1'),
                          T_photo('2', 'photo 2', 'commentaire 2', 'chemin 2')));

INSERT INTO album VALUES('2', 'album 2', 'sous titre 2',
                NT_photos(T_photo('3', 'photo 3', 'commentaire 3', 'chemin 3')));

SELECT A.idalbum, COUNT(P.numphoto) as nombre_photos
from album A, TABLE(A.photos) P
group by A.idalbum;

SELECT A.idalbum, A.titre, F.dimensions
from fichier F, album A, TABLE(A.photos) P
where P.chemin = F.chemin
order by F.dimensions desc;

-- suppression de la table album --

DROP TABLE album;

-- pour la creation du type livre --

CREATE TYPE T_Livre UNDER T_Album(
  preface varchar(20),
  postface varchar(20),
  couverture ref T_photo,
  MEMBER PROCEDURE set_couverture(num_photo integer)
)
NOT FINAL;
/
show errors;

-- recreation de la table album --

CREATE TABLE album OF T_album
  nested table photos store as LesPhotos;

ALTER TABLE album ADD CONSTRAINT pk_album PRIMARY KEY (idalbum);

INSERT INTO album VALUES('1', 'album 1', 'sous titre 1',
                NT_photos(T_photo('1', 'photo 1', 'commentaire 1', 'chemin 1'),
                          T_photo('2', 'photo 2', 'commentaire 2', 'chemin 2')));

INSERT INTO album VALUES('2', 'album 2', 'sous titre 2',
                NT_photos(T_photo('3', 'photo 3', 'commentaire 3', 'chemin 3')));

--------------------------------------------------------------------------------
-- corps des fonctions et procedures -------------------------------------------
--------------------------------------------------------------------------------

-- fonction statique obligatoire --

CREATE OR REPLACE TYPE BODY T_client AS
  STATIC FUNCTION verif_DL(ref_cli REF T_client) RETURN INTEGER IS
  nbf INTEGER;
  BEGIN
    select COUNT(chemin) into nbf
    from fichier
    where ref_cli = client;
    IF nbf = 0 THEN
      RETURN 0;
    ELSE
      RETURN 1;
    END IF;
  END;
END;
/
show errors;

SELECT C.email FROM client C WHERE T_client.verif_DL(REF(C)) = 0;

DELETE FROM client C WHERE T_client.verif_DL(REF(C)) = 0;

CREATE OR REPLACE TYPE BODY T_album AS
  -- idem, fonction statique obligatoire --
  STATIC FUNCTION verif_photo(ref_album REF T_album) RETURN INTEGER IS
  nbp INTEGER;
  BEGIN
    select COUNT(P.numPhoto) into nbp
    from album A, TABLE(A.photos) P
    where ref_album = REF(A);
    IF nbp = 0 THEN
      RETURN 0;
    ELSE
      RETURN 1;
    END IF;
  END;
  MEMBER PROCEDURE ajoute_photo(chemin_photo varchar, titre_photo varchar,
  commentaire_photo varchar) IS
  nbp INTEGER;
  nbc INTEGER;
  errorFK EXCEPTION;
  BEGIN
    select COUNT(P.numPhoto) into nbp
    from album A, TABLE(A.photos) P
    where A.idalbum = self.idalbum;
    nbp := nbp + 1;
    select COUNT(F.chemin) into nbc
    from fichier F
    where F.chemin = chemin_photo;
    IF nbc > 0 THEN
      INSERT INTO TABLE(select A.photos
                        from album A
                        where A.idalbum = self.idalbum)
      VALUES(nbp, titre_photo, commentaire_photo, chemin_photo);
    ELSE
      raise errorFK;
    END IF;
  EXCEPTION
    WHEN errorFK THEN
    RAISE_APPLICATION_ERROR(-20001, 'Erreur foreign key, chemin fichier introuvable');
  END;
END;
/
show errors;

commit;

-- procedure (programme) de test ajout de photos --

DECLARE
  al T_Album;
BEGIN
  select VALUE(A) into al
  from album A
  where A.idalbum = '1';
  al.ajoute_photo('chemin 2', 'titre 4', 'commentaire 4');
END;
/
show errors;

CREATE OR REPLACE TYPE BODY T_Livre AS
  MEMBER PROCEDURE set_couverture(num_photo integer) IS
  nbp INTEGER;
  errorFK EXCEPTION;
  BEGIN
    select COUNT(P.numPhoto) into nbp
    from album A, TABLE(A.photos) P
    where P.numPhoto = num_photo;
    IF nbp > 0 THEN
      UPDATE (select TREAT(VALUE(A) AS T_Livre)
              from album A
              where A.idalbum = self.idalbum)
      SET couverture = (select REF(P)
                        from album A, TABLE(A.photos) P
                        where P.numPhoto = num_photo);
    ELSE
      raise errorFK;
    END IF;
  EXCEPTION
    WHEN errorFK THEN
    RAISE_APPLICATION_ERROR(-20002, 'Erreur foreign key, photo introuvable');
  END;
END;
/
show errors;
