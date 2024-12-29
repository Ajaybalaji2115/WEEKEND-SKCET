/*
Single File Programming Question
Problem Statement


Given an array of positive distinct integer denoting the crossing time of ‘n’ people. These ‘n’ people are standing at one side of bridge. Bridge can hold at max two people at a time. When two people cross the bridge, they must move at the slower person’s pace. Find the minimum total time in which all persons can cross the bridge.



Example:

Input:  Crossing Times = {10, 20, 30}

Output: 60

Explanation

1. Firstly person '1' and '2' cross the bridge with total time about 20 min (maximum of 10, 20) 

2. Now the person '1' will come back with total time of '10' minutes.

3. Lastly the person '1' and '3' cross the bridge with total time about 30 minutes

Hence total time incurred in whole journey will be 20 + 10 + 30 = 60



Input: Crossing Times = [1, 2, 5, 8}

Output: 15

Input format :
The first line contains an integer n, representing the number of people.

The second line contains n space-separated integers, where each integer represents the time, it takes for a person to cross the bridge.

Output format :
The output prints a single integer representing the minimum total time required for all n people to cross the bridge.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases will fall under the following constraints:

1 ≤ n ≤ 8

1 ≤ time ≤ 10

Sample test cases :
Input 1 :
3
10 20 30
Output 1 :
60
Input 2 :
4
1 2 5 8
Output 2 :
15
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
   list<int>v;
    for(int i=0;i<n;i++)
    {
        int n1;
        cin>>n1;
        v.push_back(n1);
    }
    while(!v.empty())
    {
        int z=v.front();
        v.pop_front();
        if(!v.empty())
        {
          int y=v.front();
          v.pop_front();
          sum+=max(z,y);
          if(z>y)
          {
              if(z%y==0)
              {
                 if(y==1 )
                 {
                     if(z%2==0)
                  v.push_front(y);
                 }
                  else
                  v.push_front(y);
                  
              }
          }
          else
          {
              if(y%z==0)
                
              {
                  if(z==1 )
                  {
                      if(y%2==0)
                  v.push_front(z);
                  }
                  else
                  v.push_front(z);
                  
              }
              
          }
        }
        else
        {
            sum+=z;
        }
       
    }
    cout<<sum;
}
