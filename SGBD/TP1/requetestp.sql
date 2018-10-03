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
-- ne marche pas avec le order by --
select distinct E1.empno, E1.ename, S.grade, E1.sal, E2.ename, D.deptno, D.loc
from emp E1, dept D, salgrade S, emp E2
where E1.deptno = D.deptno and E1.sal >= S.losal and E1.sal <= S.hisal
      and E1.mgr = E2.empno
group by E1.empno, E1.ename, S.grade, E1.sal, E2.ename, D.deptno, D.loc
union
select distinct E1.empno, E1.ename, S.grade, E1.sal, null, D.deptno, D.loc
from emp E1, dept D, salgrade S, emp E2
where E1.deptno = D.deptno and E1.sal >= S.losal and E1.sal <= S.hisal
      and E1.mgr is null
group by E1.empno, E1.ename, S.grade, E1.sal, null, D.deptno, D.loc;
-- order by E1.sal; --

-- R15 --
select distinct D.deptno, D.dname, avg(E.sal)
from dept D, emp E
where D.deptno = E.deptno
group by D.deptno, D.dname
union
select distinct D.deptno, D.dname, 0
from dept D
where D.deptno not in (select distinct D.deptno
                       from dept D, emp E
                       where D.deptno = E.deptno)
group by D.deptno, D.dname;

-- R17 --
-- where COND1 or COND2 : le résultat par COND2 est affiché avant COND1
select D.deptno, D.dname
from dept D
where D.deptno = (select D.deptno
                  from dept D, emp E
                  where D.deptno = E.deptno
                  group by D.deptno having sum(E.sal) = (select min(sum(E.sal))
                                                         from dept D, emp E
                                                         where D.deptno = E.deptno
                                                         group by D.deptno))
      or D.deptno = (select D.deptno
                     from dept D, emp E
                     where D.deptno = E.deptno
                     group by D.deptno having sum(E.sal) = (select max(sum(E.sal))
                                                            from dept D, emp E
                                                            where D.deptno = E.deptno
                                                            group by D.deptno));

-- R18 --

-- R19 --
select distinct D.deptno, D.dname
from dept D
where D.deptno not in (select distinct D.deptno
                       from dept D, emp E
                       where D.deptno = E.deptno);

-- R20 --
select D.deptno, D.dname
from dept D, emp E
where D.deptno = E.deptno
group by D.deptno, D.dname having count(E.empno) = (select max(count(E.empno))
                                                    from dept D, emp E
                                                    where D.deptno = E.deptno
                                                    group by E.deptno);
