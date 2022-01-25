-----------------------------Q.1-----------------------------
SELECT max(Score) as Score
WHERE Score < (SELECT max(Score) 
                FROM Performance)
-----------------------------Q.2-----------------------------
SELECT C.name as Customer
FROM Customers as C
WHERE C.id not in (SELECT O.customerId 
                   FROM Orders as O) 
-----------------------------Q.3-----------------------------
SELECT D.NAME, E.NAME,E.SALARY
FROM EMPLOYEE AS E JOIN DEPARTMENT AS D ON E.DEPARTMENTID = D.ID
WHERE 3 > (SELECT COUNT(DISTINCT(SALARY)) 
                       FROM EMPLOYEE AS E1
                       WHERE E.SALARY < E1.SALARY AND E.DEPARTMENTID = E1.DEPARTMENTID)

