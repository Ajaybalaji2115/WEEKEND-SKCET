/*Single File Programming Question
Problem Statement: 


There are ‘p’ balls of type P, ‘q’ balls of type Q and ‘r’ balls of type R. Using the balls we want to create a straight line such that no two balls of same type are adjacent.


Example:

Input: p = 1, q = 1, r = 0

Output: 2

Explanation: There are only two arrangements PQ and QP.



Input: p = 1, q = 1, r = 1

Output: 6

Explanation: There are only six arrangements PQR, QPR, QRP, RQP, PRQ and RPQ

Input: p = 2, q = 1, r = 1

Output: 12

Explanation: There are twelve arrangements PQRP, PRQP, QPRP, RPQP, PQPR, PRPQ, QPQR, RQRP, PQRQ, QRQP, RPQR, and QRPR

Input format :
The input consists of three integers p, q, and r, representing the number of 'p', 'q', and 'r' elements, respectively.

Output format :
The output prints a single integer representing the number of distinct arrangements of the elements.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases will fall under the following constraints:

0 ≤ p, q, r ≤ 5

Sample test cases :
Input 1 :
1 1 0
Output 1 :
2
Input 2 :
1 1 1
Output 2 :
6
Input 3 :
2 1 1
Output 3 :
12
Input 4 :
5 5 5
Output 4 :
756756
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0
image
Fill your code here
C++ (17)
theme
instruction

Clear
// You are using GCC*/
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    return n*factorial(n-1);
}
int countArrangements(int p,int q,int r)
{
    int totalBalls=p+q+r;
    if(p>(totalBalls+1)/2 || q>(totalBalls+1)/2 || r>(totalBalls+1)/2)
    {
        return 0;
    }
    int result=factorial(totalBalls);
    if(p>0)
    result/=factorial(p);
    if(q>0)
    result/=factorial(q);
    if(r>0)
    result/=factorial(r);
    return result;
}
int main()
{
    int p,q,r;
    cin>>p>>q>>r;
    cout<<countArrangements(p,q,r);
}
