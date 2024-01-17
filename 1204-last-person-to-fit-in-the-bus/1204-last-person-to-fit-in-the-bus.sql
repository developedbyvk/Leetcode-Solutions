# Write your MySQL query statement below

# Create table If Not Exists Queue (person_id int, person_name varchar(30), weight int, turn int)
# Truncate table Queue
# insert into Queue (person_id, person_name, weight, turn) values ('5', 'Alice', '250', '1')
# insert into Queue (person_id, person_name, weight, turn) values ('4', 'Bob', '175', '5')
# insert into Queue (person_id, person_name, weight, turn) values ('3', 'Alex', '350', '2')
# insert into Queue (person_id, person_name, weight, turn) values ('6', 'John Cena', '400', '3')
# insert into Queue (person_id, person_name, weight, turn) values ('1', 'Winston', '500', '6')
# insert into Queue (person_id, person_name, weight, turn) values ('2', 'Marie', '200', '4')


select person_name
from (
  select person_name, sum(weight) over (order by turn) as total
  from queue
  order by turn
) as temp where total <= 1000
order by total desc
limit 1;