# Write your MySQL query statement below
SELECT a.employee_id, a.department_id
FROM Employee a
WHERE a.primary_flag = 'Y'
   OR (SELECT COUNT(*) FROM Employee b WHERE b.employee_id = a.employee_id) = 1;
