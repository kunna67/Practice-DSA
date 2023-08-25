# Write your MySQL query statement belowes e  LEFT JOIN EmployeeUNI eu 
SELECT e2.unique_id,e1.name FROM Employees AS e1 LEFT JOIN EMployeeUNI AS e2 ON e1.id=e2.id;