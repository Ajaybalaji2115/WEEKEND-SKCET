/*gle File Programming Question
Problem Statement



You are tasked with implementing a unique sorting technique known as "Sleep Sort" using multithreading. The Sleep Sort method uses thread sleeping durations to sort a list of integers. Each integer in the input list determines the sleep duration of its corresponding thread. After waking up, each thread appends its integer to a shared list of sorted results. 



Your goal is to implement this unconventional sorting technique and print the sorted results once all threads have completed their execution.

Input format :
The first line of input consists of space-separated integers, representing the array elements.

Output format :
The output prints a single line containing the sorted array, with each integer separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ array element ≤ 1000

Sample test cases :
Input 1 :
34 23 122 9
Output 1 :
9 23 34 122 
Input 2 :
8 2 9
Output 2 :
2 8 9 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0*/
// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    vector<int>v;
    while(cin>>num)
    {
        v.push_back(num);
        
    }
    sort(v.begin(),v.end());
    for(int n:v)
    {
        cout<<n<<" ";
    }
}
