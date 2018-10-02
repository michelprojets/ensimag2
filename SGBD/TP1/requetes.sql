-- R1 --
select distinct NS, NomS, CapCh
from resorts
where typeS = 'montagne';

-- R2 --
select distinct H.NS, H.NH, H.NomH, H.AdrH, H.TelH, H.CatH
from resorts R, hotels H
where R.NS = H.NS and R.typeS = 'mer';

-- R3 --
select distinct R.NS, R.NomS
from resorts R, hotels H
where R.NS = H.NS and R.typeS = 'mer' and H.catH = '4';

-- R4 --
select distinct G.NCL, G.NomCl, G.AdrCl
from guests G, bookings B, resorts R
where G.NCL = B.NCL and R.NS = B.NS and R.typeS = 'montagne';

-- R5 --
select Ro.NS, Ro.NH, Ro.NCH
from rooms Ro, hotels H, resorts Re
where Ro.NS = H.NS and Ro.NH = H.NH and Ro.NS = Re.NS
      and Ro.prix < '50' and H.catH='2'
      and Re.typeS = 'montagne';

-- R6 --
-- 764 au lieu de 750 --
select distinct Ro.NS, Ro.NH, Ro.NCH
from resorts Re, rooms Ro, bookings B, guests G
where B.NCL = G.NCL
      and Ro.NS = B.NS and Ro.NH = B.NH and Ro.NCH = B.NCH
      and Re.NS = B.NS
      and (Ro.typCh = 'D' or Ro.typCh = 'DWC')
      and Re.typeS = 'mer';

-- R7 --
select distinct G.NCL, G.NomCl
from guests G, hotels H
where H.adrH = G.AdrCl;

-- R8 --
select H.NS, H.NH, H.nomH
from hotels H
where H.catH = '4' and H.NH not in (select R.NH
                                    from rooms R where H.catH = '4'
                                                       and H.NS = R.NS
                                                       and H.NH = R.NH
                                                       and R.typCh <> 'SDB');

-- R9 --
select distinct H.NS, H.NH, H.NomH, H.AdrH, H.CatH
from hotels H, rooms R1, rooms R2
where (R1.NCH <> R2.NCH and R1.NH = R2.NH)
      and R1.prix = R2.prix
      and H.NS = R1.NS and H.NH = R1.NH;

-- R10 --
-- attention aux hotels sans reservation - 77 au lieu de 78 --
select H.NS, H.NH, H.nomH, H.adrH, H.catH, count(B.NS)
from hotels H, bookings B
where H.NS = B.NS and H.NH = B.NH
group by H.NS, H.NH, H.nomH, H.adrH, H.catH;
-- correction --
select H.NS, H.NH, count(B.NS)
from hotels H, bookings B
where H.NS = B.NS and H.NH = B.NH
group by H.NS, H.NH
union
(select H.NS, H.NH, 0
from hotels H
where (NS, NH) not in (select NS, NH from bookings));

-- R11 --
-- no rows selected --
select H.adrH
from resorts R, hotels H, bookings B
where R.NomS = 'Chamonix' and H.NS = R.NS
      and H.NS = B.NS and H.NH = B.NH
group by H.adrH, H.NS having count(B.NS) = (select max(count(B.NS))
                                            from hotels H, bookings B
                                            where H.NS = B.NS and H.NH = B.NH
                                            group by H.NS));
-- correction --
select H.adrH
from resorts R, hotels H, bookings B
where R.NomS = 'Chamonix' and H.NS = R.NS
      and H.NS = B.NS and H.NH = B.NH
group by H.adrH, H.NS having count(B.NS) = (select max(count(B.NS))
                                            from resorts R, bookings B
                                            where R.NS = B.NS and R.NomS = 'Chamonix'
                                            group by B.NS, B.NH);

-- R12 --
-- correction --
select B.jour
from bookings B, resorts R, hotels H
where R.NS = H.NS and H.NS = B.NS and H.NH = B.NH
      and R.NomS = 'Chamonix' and H.NomH = 'Bon Séjour'
group by B.jour having count(*) = (select max(count(*))
                                    ...
                                  );

-- R13 --
-- no rows selected au lieu de 1 (Sales, Salesman, 5600€, 4, 1400€) --
select H.NS, H.NH, H.nomH, H.adrH, H.catH
from hotels H
where H.NH not in (select distinct H.NH
                   from hotels H1, rooms R
                   where H1.NS = R.NS and H1.NH = R.NH and R.prix > 40);

-- R15 --
select G.NCL, G.NomCl -- dividende --
from guests G
where not exists (select null -- diviseur --
                  from hotels H, resorts R
                  where H.NS = R.NS and R.NomS = 'Chamonix' and CatH = '2'
                        and not exists (select null -- liaisons --
                                        from guests G1, bookings B
                                        where G1.NCL = G.NCL  -- liaison G et G1 --
                                              and G1.NCL = B.NCL  -- liaison guest et bookings ("clients ayant réservé") --
                                              and B.NS = H.NS and B.NH = H.NH));  -- liaison bookings et hotels ("réservé dans tous les hôtels")--
