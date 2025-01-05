/*Single File Programming Question
Problem Statement



Shyam and Surya are playing a number game where Shyam challenges Surya to merge two sorted arrays in descending order. Surya needs to write a program to accomplish this task efficiently.



Help Surya to complete this program.

Input format :
The first line contains an integer m, representing the size of the first sorted array.

The second line contains m space-separated integers, representing the elements of the first sorted array.

The third line contains an integer n, representing the size of the second sorted array.

The fourth line contains n space-separated integers, representing the elements of the second sorted array.

Output format :
The output prints the merged and sorted array in descending order, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the given test cases will fall under the following constraints:

1 ≤ m, n ≤ 100

-1000 ≤ Elements in array1, array2 ≤ 1000

Sample test cases :
Input 1 :
4
1 3 5 7
4
6 8 9 10
Output 1 :
10 9 8 7 6 5 3 1 
Input 2 :
1
98
3
87 99 100
Output 2 :
100 99 98 87 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0*/
// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
     vector<int>v;
     int k;
     for(int i=0;i<m;i++)
     {
         cin>>k;
         v.push_back(k);
     }
  
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>k;
         v.push_back(k);
     }
     sort(v.begin(),v.end(),greater<int>());
     for(int x:v)
     {
         cout<<x<<" ";
     }
}
