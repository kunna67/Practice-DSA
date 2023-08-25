# Write your MySQL query statement below
SELECT p.product_name ,s.year ,s.price from Sales as s left join Product as p on p.product_id = s.product_id ;