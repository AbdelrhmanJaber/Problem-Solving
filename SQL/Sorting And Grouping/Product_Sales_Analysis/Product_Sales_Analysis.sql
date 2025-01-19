# Write your MySQL query statement below
with first_sale as(
    select product_id , min(year) as first_year
    from Sales
    group by product_id
)

select Sales.product_id , Sales.year as first_year , Sales.quantity , Sales.price
from Sales
join first_sale
on Sales.product_id = first_sale.product_id and Sales.year = first_sale.first_year ;