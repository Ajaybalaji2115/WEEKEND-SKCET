
/*Alex is a software engineer working on data compression algorithms. He needs to implement a simple run-length encoding decompression algorithm for a project. In this scenario, a queue is used to store the compressed data. Each element in the queue represents a pair where the first value indicates the number of times the second value should be repeated.



Alex has designed a queue-based system to handle this decompression task. He needs to read a sequence of compressed data from the queue, decompress it according to the run-length encoding rules, and then print the decompressed sequence. Your task is to implement this system.

Input format :
The first line consists of an integer n denoting the number of pairs in the compressed queue.

The next n/2 lines consists of two integers each, representing:

An integer c, indicating the number of times the subsequent value should be repeated.
An integer v, indicating the value that is to be repeated c times.
Output format :
The output displays the decompressed sequence, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 10 (should be an even number)

1 ≤ c ≤ 100

0 ≤ v ≤ 100

Sample test cases :
Input 1 :
6
2 1
3 4
1 7
Output 1 :
1 1 4 4 4 7 
Input 2 :
10
1 5
2 4
3 6
4 8
5 9
Output 2 :
5 4 4 6 6 6 8 8 8 8 9 9 9 9 9 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0// You are using GCC*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>Map;
    for(int i=0;i<n/2;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        for(int j=0;j<n1;j++)
      cout<<n2<<" ";
    }
  
}
