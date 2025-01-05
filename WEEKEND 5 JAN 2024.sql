/*Single File Programming Question
Problem Statement



You are tasked with managing a sales database that includes information about SALESMAN, CUSTOMER, and ORDERS. 



Your goal is to create queries to list all salesman and indicate whether they have or don't have customers in their respective cities using the UNION operation.



The following table has already been created, and the records are inserted into the table.





The Sample records are given below



Table name: SALESMAN



 

Table name: CUSTOMER





Table name: ORDERS



Input format :
The input table is already created, and records are already prepopulated, as mentioned in the problem statement.



Output format :
The output includes the Salesman_id, Name, City, and a Status column indicating whether the salesman has customers ('Has Customers') or not ('No Customers') as shown below.



Salesman_id	Name	City	Status
1	John Doe	Bangalore	Has Customers
2	Jane Smith	New York	Has Customers
3	Michael Johnson	London	Has Customers
4	Emily Davis	Paris	Has Customers
5	Chris Wilson	Tokyo	Has Customers
6	Sophia Brown	Berlin	Has Customers
7	Daniel Taylor	Beijing	Has Customers
8	Olivia White	Sydney	Has Customers
9	William Miller	Toronto	Has Customers
10	Ava Jones	Mumbai	Has Customers
11	Damon salvatore	Zurich	No Customers
12	Stephan salvatore	Rome	No Customers


Refer to the sample output for the column headers.

Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0*/
# You are using MYSQL
SELECT
S.Salesman_id,S.Name,S.City,
CASE
WHEN C.Customer_id IS NOT NULL THEN 'Has Customers'
ELSE
'No Customers'
END AS Status
FROM SALESMAN S
LEFT JOIN CUSTOMER C
ON S.City=C.City
GROUP BY S.Salesman_id,S.Name,S.City,S.Customer_id
GROUP BY S.Salesman_id;
