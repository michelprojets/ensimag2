-- R10 --
select distinct D.deptno, D.dname
from dept D, emp E
where E.deptno = D.deptno and E.job in ('CLERK', 'SALESMAN', 'ANALYST');

-- R11 --
select distinct E1.empno, E1.ename
from emp E1, emp E2
where E1.job = 'MANAGER' and E2.mgr = E1.empno and E2.comm is not null;

-- R12 --
select distinct E.empno, E.ename
from emp E, dept D
where E.deptno = D.deptno and D.loc in ('DALLAS', 'CHICAGO') and E.sal > 1000;

-- R13 --
select distinct D.dname, E.job, sum(E.sal), count(E.empno), avg(E.sal)
from dept D, emp E
where E.deptno = D.deptno
group by D.dname, E.job having count(E.empno) > 2;

-- R14 --
select distinct E.emp, E.ename, S.grade, E.sal, E2.ename
from emp E1, dept D, salgrade S, emp E2
where E1.deptno = D.deptno and E1.sal >= S.losal and E1.sal <= S.hisal
      and E1.mgr = E2.empno
group by E1.emp, E1.ename, S.grade, E1.sal
