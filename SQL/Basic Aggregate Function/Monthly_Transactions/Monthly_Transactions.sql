# Write your MySQL query statement below
SELECT DATE_FORMAT(DATE(trans_date), '%Y-%m') AS MONTH ,
country , 
count(*) AS trans_count,
sum(case when(state = 'approved')then 1 else 0 end) AS approved_count,
sum(amount) AS trans_total_amount,
sum(case when(state = 'approved')then amount else 0 end) as approved_total_amount
from Transactions
group by DATE_FORMAT(DATE(trans_date), '%Y-%m'), country;