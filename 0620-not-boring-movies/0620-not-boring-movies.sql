# Write your MySQL query statement below
SELECT * FROM cinema as c
where c.id % 2 = 1
AND 
c.description != 'boring'
order by c.rating DESC;