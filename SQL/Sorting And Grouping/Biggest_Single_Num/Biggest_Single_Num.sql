# Write your MySQL query statement below
with single_number as(
    select num
    from MyNumbers
    group by num
    having count(num) = 1
    order by num desc
)

SELECT 
    CASE 
        WHEN EXISTS (SELECT 1 FROM single_number) THEN (SELECT * FROM single_number LIMIT 1)
        ELSE null
    END AS num;