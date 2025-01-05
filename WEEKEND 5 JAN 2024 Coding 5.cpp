/*Single File Programming Question
Problem Statement



John is working on implementing a hash table using quadratic probing. He needs a program to insert elements from an array into the hash table and then print the final state of the hash table. 



Write a program to ensure that the task is done.

Input format :
The first line of input consists of a single integer N, representing the number of elements in the array.

The second line of input consists of N space-separated integers, representing the elements to be inserted into the hash table.

The third line of input consists of a single integer L, representing the size of the hash table.

Output format :
The output consists of a single line containing L space-separated integers, representing the hash table after hashing the elements using quadratic probing.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the given test cases will fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ Elements ≤ 103

1 ≤ L ≤ 10

Sample test cases :
Input 1 :
7
50 700 76 85 92 73 101
7
Output 1 :
700 50 85 73 101 92 76 
Input 2 :
5
10 20 30 40 50
5
Output 2 :
10 20 -1 -1 30 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0
  // You are using GCC*/
#include<bits/stdc++.h>
using namespace std;
void quadraticProbing(vector<int>&hashTable,int L,int key)
{
    int index=key%L;
    int i=0;
    while(hashTable[(index+i*i)%L]!=-1 && i<L)
    {
        i++;
    }
    if(i<L)
    {
        hashTable[(index+i*i)%L]=key;
    }
}
int main()
{
    int N;
    cin>>N;
    vector<int>elements(N);
    for(int i=0;i<N;i++)
    {
        cin>>elements[i];
    }
    int L;
    cin>>L;
    vector<int>hashTable(L,-1);
        for(int i=0;i<N;i++)
        {
            quadraticProbing(hashTable,L,elements[i]);
        }
        for(int i=0;i<L;i++)
        {
            cout<<hashTable[i];
            if(i<L-1)
            cout<<" ";
        }
}
