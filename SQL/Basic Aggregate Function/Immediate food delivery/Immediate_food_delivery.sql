# Write your MySQL query statement below
with sub AS(
    select customer_id,
    min(order_date) AS order_date
    from Delivery
    group by customer_id
)

select
round(avg(Delivery.order_date = Delivery.customer_pref_delivery_date) * 100 , 2) 
as immediate_percentage
from Delivery
join sub
on Delivery.order_date = sub.order_date 
and Delivery.customer_id = sub.customer_id