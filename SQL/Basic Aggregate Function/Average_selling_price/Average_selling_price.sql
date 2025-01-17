# Write your MySQL query statement below
SELECT 
    Prices.product_id, 
    COALESCE(
        ROUND(
            SUM(UnitsSold.units * Prices.price) / SUM(UnitsSold.units),
            2
        ),
        0
    ) AS average_price
FROM Prices
LEFT JOIN UnitsSold
    ON Prices.product_id = UnitsSold.product_id
WHERE UnitsSold.purchase_date BETWEEN Prices.start_date AND Prices.end_date
    OR UnitsSold.product_id IS NULL
GROUP BY Prices.product_id;
