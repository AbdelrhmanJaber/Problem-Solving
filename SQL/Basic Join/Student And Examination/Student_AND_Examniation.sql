# Write your MySQL query statement below
select Students.student_id , Students.student_name , 
Subjects.subject_name , count(Examinations.subject_name) AS attended_exams
from Students
cross join Subjects
left join Examinations
on Students.student_id = Examinations.student_id 
AND Examinations.subject_name = Subjects.subject_name
GROUP BY Students.student_id, Students.student_name, Subjects.subject_name
ORDER BY Students.student_id, Subjects.subject_name;