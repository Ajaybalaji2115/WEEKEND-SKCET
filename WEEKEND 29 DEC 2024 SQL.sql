/*Problem Statement



Report the names of all SalesPerson

Write an SQL query to report the names of all the salespersons who did not have any orders related to the company with the name "RED".



Return the result table in any order.

SalesPerson(Table)



Company(Table)



Orders(Table)



Sample Data:



Table Name: Orders





Table Name: Company





Table Name: SalesPerson



Input format :
The input table is already created, and records are already prepopulated, as mentioned in the problem statement.



Output format :
The output displays the names of salespersons who did not have any orders related to the company with the name "RED".



name
Amy
Mark
Alex


Refer to the sample output for the column headers.

Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
# You are using MYSQL*/
select s.name from Orders as  o  join Company as  c on o.com_id=c.com_id
join SalesPerson as s on c.name=s.name where c.name  NOT IN('RED');
