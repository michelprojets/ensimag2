drop table DIRSAL;
drop table AVERT;
drop table TMP;
drop table EMPLOYEE;
drop table DEPTO;

create table DEPTO as select * from dept;
create table EMPLOYEE as select * from emp;

alter table DEPTO add (NEMP NUMBER);

update DEPTO set nemp = 3 where deptno = 10;
update DEPTO set nemp = 5 where deptno = 20;
update DEPTO set nemp = 6 where deptno = 30;
update DEPTO set nemp = 0 where deptno = 40;

-- 1) --

create table TMP(
  entier int
);

CREATE TRIGGER t_ens after UPDATE ON EMPLOYEE
BEGIN
  insert into tmp values(1);
END;
/

-- 2) --

update EMPLOYEE set hiredate=SYSDATE where sal > 0;

select * from EMPLOYEE;
select * from TMP;

-- ajout d'un seul tuple dans la table TMP

DROP TRIGGER t_ens;

CREATE TRIGGER t_ens after UPDATE ON EMPLOYEE
FOR EACH ROW
BEGIN
  insert into tmp values(1);
END;
/
show err;

update EMPLOYEE set hiredate=SYSDATE where sal > 0;

select * from EMPLOYEE;
select * from TMP;

-- ajout d'autant de tuples dans la table TMP que de rows modifiés dans l'update

-- 3) --

alter table EMPLOYEE disable all triggers;

update EMPLOYEE set hiredate=SYSDATE where sal > 0;

select * from EMPLOYEE;
select * from TMP;

-- trigger disabled donc ne fait plus rien lors de l'ajout

alter table EMPLOYEE enable all triggers;

update EMPLOYEE set hiredate=SYSDATE where sal > 0;

select * from EMPLOYEE;
select * from TMP;

-- trigger enabled

-- 4) --

DROP TRIGGER T1;

CREATE TRIGGER t1 BEFORE UPDATE ON employee
FOR EACH ROW
BEGIN
  :new.hiredate := sysdate;
END;
/
show err;

select * from employee;
update EMPLOYEE set job = 'NOUVEAU' where empno = 7934;
select * from employee;

-- 5) --

DROP TRIGGER T2;

CREATE TRIGGER t2 BEFORE INSERT ON employee
FOR EACH ROW
WHEN (new.deptno IS NOT NULL)
DECLARE
x NUMBER;
BEGIN
  SELECT COUNT(*) into x
  FROM depto WHERE deptno=:new.deptno;
  IF x = 0 THEN
    INSERT INTO depto values(:new.deptno, '????','paris', 1);
  END IF;
END;
/
show err;

select * from DEPTO;
insert into employee values(7938, 'MARTIN', 'ANALYST', 7566, NULL, 1000, 0, 90);
select * from EMPLOYEE;
select * from DEPTO;

DROP TRIGGER T7;

CREATE TRIGGER t7 AFTER INSERT OR DELETE ON employee
FOR EACH ROW
DECLARE x NUMBER;
BEGIN
  IF ((INSERTING) AND :new.deptno IS NOT NULL) THEN
    SELECT count(*) INTO x
    FROM depto WHERE deptno=:new.deptno;
    IF x = 0 THEN
      INSERT INTO depto values(:new.deptno, '????', 'paris', 1);
    ELSE
      UPDATE depto SET nemp = nemp +1 WHERE deptno = :new.deptno;
    END IF;
  END IF;
  IF ((DELETING) AND :old.deptno IS NOT NULL) THEN
    UPDATE depto SET nemp = nemp -1 WHERE deptno = :old.deptno;
  END IF;
END;
/
show err;

select * from DEPTO;
insert into employee values(7935, 'VARGAS', 'ANALYST', 7566, NULL, 3000, 0, 40);
insert into employee values(7936, 'WALTER', 'ANALYST', 7566, NULL, 3000, 0, 20);
select * from DEPTO;

DROP TRIGGER T3;

CREATE TRIGGER t3 AFTER UPDATE OF deptno ON depto
FOR EACH ROW
BEGIN
  IF :old.deptno != :new.deptno THEN
    UPDATE employee SET employee.deptno = :new.deptno
    WHERE employee.deptno = :old.deptno;
  END IF;
END;
/
show err;

select * from EMPLOYEE;
update depto SET deptno = 70 WHERE deptno = 40;
select * from EMPLOYEE;

DROP TRIGGER T4;

CREATE TRIGGER T4 BEFORE DELETE ON depto
FOR EACH ROW
BEGIN
  UPDATE employee SET employee.deptno = NULL
  WHERE  employee.deptno = :old.deptno;
END;
/
show err;

insert into depto values (80, 'BIDON', 'GRENOBLE', 0);
insert into employee values(7940, 'SANCHEZ', 'CLERCK', 7453, '01-DEC-98', 4000, 0, 80);
delete depto where deptno = 80;
select * from EMPLOYEE;
delete employee where ename = 'SANCHEZ';

DROP TRIGGER T5;

CREATE TRIGGER T5 BEFORE INSERT OR UPDATE OF deptno ON employee
FOR EACH ROW
  WHEN(new.deptno IS NOT NULL)
DECLARE
  dummy              INTEGER;
  invalid_department EXCEPTION;
  valid_department   EXCEPTION;
  mutating_table     EXCEPTION;
  PRAGMA EXCEPTION_INIT (mutating_table, -4091);
  CURSOR dummy_cursor (dn number) IS
    SELECT deptno FROM depto WHERE deptno = dn
  FOR UPDATE OF deptno;
BEGIN
  OPEN dummy_cursor(:new.deptno);
  FETCH dummy_cursor INTO dummy;
  IF dummy_cursor %NOTFOUND THEN
    RAISE invalid_department;
  ELSE
    RAISE valid_department;
  END IF;
  EXCEPTION
  WHEN invalid_department THEN
    RAISE_APPLICATION_ERROR(-20000,'Numero departement invalide '
                            || TO_CHAR(:new.deptno));
    CLOSE dummy_cursor;
  WHEN valid_department THEN
    CLOSE dummy_cursor;
  WHEN mutating_table THEN
    NULL;
END;
/
show err;

insert into employee values (7937, 'SANCHEZ', 'CLERCK', 7453, '01-DEC-98', 4000, 0, 80);

DROP TRIGGER T4;

DROP TRIGGER T8;

CREATE TRIGGER T8 BEFORE DELETE OR UPDATE OF deptno ON depto
FOR EACH ROW
DECLARE
  dummy INTEGER;
  emp_present EXCEPTION;
  emp_non_present EXCEPTION;
  CURSOR dummy_cursor (dn NUMBER) IS
    SELECT deptno FROM employee WHERE deptno = dn;
BEGIN
  OPEN dummy_cursor(:old.deptno);
  FETCH dummy_cursor INTO dummy;
  IF dummy_cursor %FOUND THEN
    RAISE emp_present;
  ELSE
    RAISE emp_non_present;
  END IF;
  EXCEPTION
  WHEN emp_present THEN
    RAISE_APPLICATION_ERROR(-20001, 'Employes dans ce departement: '
                            || TO_CHAR(:old.deptno));
    CLOSE dummy_cursor;
  WHEN emp_non_present THEN
    CLOSE dummy_cursor;
END;
/
show err;

insert into depto values (80, 'BIDON', 'GRENOBLE', 0);
insert into employee values (7937, 'SANCHEZ', 'CLERCK', 7453, '01-DEC-98', 4000, 0, 80);
delete depto where deptno = 80;

-- 7) --

CREATE TABLE AVERT(
  empno NUMBER(4),
  sal NUMBER(7,2)
);

DROP TRIGGER T9;

CREATE TRIGGER T9 BEFORE UPDATE OF sal ON employee
FOR EACH ROW
WHEN (new.sal > 5000)
BEGIN
  INSERT INTO avert values(:new.empno, :new.sal);
END;
/
show err;

update employee set sal = 6000 where empno = 7936;

DROP TRIGGER T9;

CREATE TABLE DIRSAL AS
(SELECT deptno, ename, sal FROM employee WHERE job like 'MAN%');

DROP TRIGGER T10;

CREATE TRIGGER T10
  BEFORE INSERT OR UPDATE OF sal ON employee
  FOR EACH ROW
DECLARE
  maxsal       NUMBER;
  x            NUMBER;
  salaire_max  EXCEPTION;
BEGIN
  IF (:new.job != 'MANAGER') THEN
    SELECT sal INTO maxsal
    FROM dirsal
    WHERE deptno = :old.deptno;
    IF (:new.sal >= maxsal) THEN
      RAISE salaire_max;
    END IF;
  END IF;
  IF (:new.job = 'MANAGER') THEN
    UPDATE dirsal SET sal = :new.sal;
  END IF;
  EXCEPTION
  WHEN salaire_max THEN
    raise_application_error(-20002,'salaire ' ||
                            TO_CHAR(:new.sal) || ' superieur a celui du MANAGER ' ||
                            TO_CHAR(maxsal) || ' pour employe ' || :new.empno);
END;
/
show err;

update employee set sal = 6000 where empno = 7936;

-- 8) --

DROP TRIGGER T12;

CREATE TRIGGER t12
  BEFORE INSERT OR DELETE OR UPDATE ON employee
  DECLARE
    weekends      EXCEPTION;
    heure_travail EXCEPTION;
  BEGIN
  IF(TO_CHAR(SYSDATE,'DY') = 'SAT' OR TO_CHAR(SYSDATE, 'DY') = 'SUN') THEN
    RAISE weekends;
  END IF;
  IF(TO_CHAR(SYSDATE,'HH24') >= 12 AND TO_CHAR(SYSDATE,'HH24') <= 13) THEN
    RAISE heure_travail;
  END IF;
  EXCEPTION
  WHEN weekends THEN
    RAISE_APPLICATION_ERROR (-20005, 'Modification interdite pendant les week-end !');
  WHEN heure_travail THEN
    RAISE_APPLICATION_ERROR (-20006, 'Modification interdite en dehors des heures de travail !');
END;
/
show err;
