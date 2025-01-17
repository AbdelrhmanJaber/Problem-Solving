# Write your MySQL query statement below
with first_logged as(
    select player_id , min(event_date) as event_date 
    from Activity
    group by player_id
)

select 
round(count(distinct case when DATE_ADD(first_logged.event_date , interval 1 DAY) = 
Activity.event_date then Activity.player_id end) 
/ count(distinct first_logged.player_id) , 2) as fraction
from Activity
left join first_logged
on Activity.player_id = first_logged.player_id
