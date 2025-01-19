# Write your MySQL query statement below
select manager.employee_id , manager.name,
count(employee.reports_to) as reports_count ,
round(avg(employee.age)) as average_age
from Employees employee
join Employees manager
on employee.reports_to = manager.employee_id
group by manager.employee_id , manager.name 
order by manager.employee_id ;