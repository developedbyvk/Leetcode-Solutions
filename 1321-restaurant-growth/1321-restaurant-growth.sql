# Write your MySQL query statement below

# Create table If Not Exists Customer (customer_id int, name varchar(20), visited_on date, amount int)
# Truncate table Customer
# insert into Customer (customer_id, name, visited_on, amount) values ('1', 'Jhon', '2019-01-01', '100')
# insert into Customer (customer_id, name, visited_on, amount) values ('2', 'Daniel', '2019-01-02', '110')
# insert into Customer (customer_id, name, visited_on, amount) values ('3', 'Jade', '2019-01-03', '120')
# insert into Customer (customer_id, name, visited_on, amount) values ('4', 'Khaled', '2019-01-04', '130')
# insert into Customer (customer_id, name, visited_on, amount) values ('5', 'Winston', '2019-01-05', '110')
# insert into Customer (customer_id, name, visited_on, amount) values ('6', 'Elvis', '2019-01-06', '140')
# insert into Customer (customer_id, name, visited_on, amount) values ('7', 'Anna', '2019-01-07', '150')
# insert into Customer (customer_id, name, visited_on, amount) values ('8', 'Maria', '2019-01-08', '80')
# insert into Customer (customer_id, name, visited_on, amount) values ('9', 'Jaze', '2019-01-09', '110')
# insert into Customer (customer_id, name, visited_on, amount) values ('1', 'Jhon', '2019-01-10', '130')
# insert into Customer (customer_id, name, visited_on, amount) values ('3', 'Jade', '2019-01-10', '150')

select visited_on,
    (
        select sum(amount)
        from customer
        where visited_on
            between date_sub(c.visited_on, interval 6 day) and c.visited_on
    ) as amount,
    round((
        select sum(amount)/7
        from customer
        where visited_on 
            between date_sub(c.visited_on, interval 6 day) and c.visited_on
    ), 2) as average_amount
from customer c
where visited_on >= (
    select date_add(min(visited_on), interval 6 day)
    from customer
)
group by visited_on
