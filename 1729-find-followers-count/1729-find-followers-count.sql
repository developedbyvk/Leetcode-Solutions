# Write your MySQL query statement below

# Create table If Not Exists Followers(user_id int, follower_id int)
# Truncate table Followers
# insert into Followers (user_id, follower_id) values ('0', '1')
# insert into Followers (user_id, follower_id) values ('1', '0')
# insert into Followers (user_id, follower_id) values ('2', '0')
# insert into Followers (user_id, follower_id) values ('2', '1')

select distinct user_id,count(follower_id) as followers_count 
from followers 
group by user_id 
order by user_id