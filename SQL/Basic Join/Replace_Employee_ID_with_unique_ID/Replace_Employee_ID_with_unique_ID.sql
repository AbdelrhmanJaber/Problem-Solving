select Employees.name , EmployeeUNI.unique_id
from EmployeeUNI
right join Employees
on Employees.id = EmployeeUNI.id