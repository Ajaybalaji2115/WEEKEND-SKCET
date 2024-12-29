/*gle File Programming Question
Problem Statement



Gautam is training for a mountain climb and has recorded the heights of various peaks he encountered along a trail. The peak's height is recorded in a binary search tree (BST), representing the order in which he climbed them. He wants to analyze his climb by:



Listing the heights of the peaks in the order he encountered them using a pre-order traversal of the climb sequence.
Calculating the difference between the highest and lowest peak heights he encountered.


Write a program for Gautam that performs these tasks based on the input data.

Input format :
The first line of input consists of an integer n, the number of peaks (or tree heights).

The second line consists of n space-separated integers, representing the heights of the peaks.

Output format :
The first line of output prints the heights of the peaks in pre-order traversal order, separated by spaces.

The second line prints the difference between the highest and lowest peak heights.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 25

1 ≤ peak height ≤ 150

Sample test cases :
Input 1 :
7
4 8 5 2 9 3 1
Output 1 :
4 2 1 3 8 5 9 
8
Input 2 :
5
5 3 8 9 1
Output 2 :
5 3 1 8 9 
8
Input 3 :
3
56 35 78
Output 3 :
56 35 78 
43
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0
// You are using GCC*/
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
