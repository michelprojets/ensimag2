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

-- R11 --
-- no rows selected --
select H.adrH
from resorts R, hotels H, bookings B
where R.NomS = 'Chamonix' and H.NS = R.NS
      and H.NS = B.NS and H.NH = B.NH
group by H.adrH, H.NS having count(B.NS) = (select max(nb)
                                            from (select count (B.NS) nb
                                                  from hotels H, bookings B
                                                  where H.NS = B.NS and H.NH = B.NH
                                                  group by H.NS));

-- R13 --
-- no rows selected --
select H.NS, H.NH, H.nomH, H.adrH, H.catH
from hotels H
where H.NH not in (select distinct H.NH
                   from hotels H, rooms R
                   where H.NS = R.NS and H.NH = R.NH and R.prix > 40);
