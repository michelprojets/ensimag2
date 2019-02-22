
CREATE TABLE Users(
    login varchar2(10) PRIMARY KEY,
    password varchar2(100) NOT NULL,
    ville char(3) NOT NULL
);
INSERT INTO Users VALUES ('toto', 'toto', 'GRE');
INSERT INTO Users VALUES ('titi', 'titi', 'SMH');