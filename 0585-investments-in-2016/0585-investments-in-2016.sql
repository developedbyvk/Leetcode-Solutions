# Write your MySQL query statement below

select round(sum(tiv_2016), 2) tiv_2016
from insurance i
where (lat, lon) not in (select lat, lon from insurance where pid<>i.pid)
    and (select count(tiv_2015) from insurance where tiv_2015=i.tiv_2015) > 1;