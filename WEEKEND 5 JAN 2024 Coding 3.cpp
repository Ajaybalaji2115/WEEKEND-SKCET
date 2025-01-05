/*Single File Programming Question
Problem statement



The task is to decode a sequence of length at most 8, where the sequence consists of the letters "I" and "D". "I" represents an increasing sequence, while "D" represents a decreasing sequence. The decoded sequence should consist of a minimum number with no repeated digits

Example:

Input:

DI

Output:

213



Explanation:

For each element of the given sequence, insert its position index+1 into a memory that stores it in FILO order. If the current character is increasing 'I' or all characters of the input sequence are processed, pop all numbers from the stack and append them to the output string.
Input should contain characters I and D in uppercase(lowercase is not allowed)
Input format :
Input should consist of a String.

Output format :
The output should be the decoded version of the input.

Code constraints :
Input should be combination of characters I and D in uppercase

Sample test cases :
Input 1 :
I
Output 1 :
12
Input 2 :
DI
Output 2 :
213
Input 3 :
abID
Output 3 :
Invalid input
Input 4 :
id
Output 4 :
Invalid input
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0// You are using GCC*/
#include<bits/stdc++.h>
using namespace std;
void bfslexicographical(char source,map<char,vector<char>>&graph)
{
    priority_queue<char,vector<char>,greater<char>>pq;
  map<char,bool>visited;
    pq.push(source);
    visited[source]=true;
   
    while(!pq.empty())
    {
        char node=pq.top();
        pq.pop();
        cout<<node<<" ";
        
        for(char neighbor:graph[node])
        {
            if(!visited[neighbor])
            {
                pq.push(neighbor);
                visited[neighbor]=true;
            }
        }
    }
    
}
int main()
{
   int N,M;
   cin>>N>>M;
   map<char,vector<char>>graph;
    for(int i=0;i<M;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(auto & pair :graph)
    {
        sort(pair.second.begin(),pair.second.end());
    }
  char source;
    cin>>source;
    bfslexicographical(source,graph);
}
