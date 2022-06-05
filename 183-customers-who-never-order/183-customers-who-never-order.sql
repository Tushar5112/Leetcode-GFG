# Write your MySQL query statement below
select c.name as Customers 
from customers c left join orders o 
on c.ID = o.customerID
group by c.ID
having count(o.ID) = 0;