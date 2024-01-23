# Write your MySQL query statement below

# Create table If Not Exists Transactions (id int, country varchar(4), state enum('approved', 'declined'), amount int, trans_date date)
# Truncate table Transactions
# insert into Transactions (id, country, state, amount, trans_date) values ('121', 'US', 'approved', '1000', '2018-12-18')
# insert into Transactions (id, country, state, amount, trans_date) values ('122', 'US', 'declined', '2000', '2018-12-19')
# insert into Transactions (id, country, state, amount, trans_date) values ('123', 'US', 'approved', '2000', '2019-01-01')
# insert into Transactions (id, country, state, amount, trans_date) values ('124', 'DE', 'approved', '2000', '2019-01-07')


SELECT 
  DATE_FORMAT(trans_date, '%Y-%m') as month,
  country, count(*) as trans_count, 
  sum(if(state='approved',1,0)) as approved_count, 
  sum(amount) as trans_total_amount, 
  sum(if(state='approved',amount,0)) as approved_total_amount 
FROM Transactions
GROUP BY DATE_FORMAT(trans_date, '%Y-%m'), country