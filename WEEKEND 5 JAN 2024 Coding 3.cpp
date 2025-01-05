/*Single File Programming Question
Problem Statement



Given a graph G consisting of N nodes, a source S, and an array edges[][2] of type {u, v} that denotes that there is an undirected edge between node u and v, the task is to traverse the graph in lexicographical order using a Breadth-First Search(BFS) algorithm.



Input: 

N = 10, M = 10, S = ‘a’, 

edges[][2] = { { ‘a’, ‘y’ }, { ‘a’, ‘z’ }, { ‘a’, ‘p’ }, { ‘p’, ‘c’ }, { ‘p’, ‘b’ }, { ‘y’, ‘m’ }, { ‘y’, ‘l’ }, { ‘z’, ‘h’ }, { ‘z’, ‘g’ }, { ‘z’, ‘i’ } } 



Output: 

a p y z b c l m g h i



Input format :
The first line of input is the number of nodes N in the graph.

The second line consists of the number of edges M of the graph.

The following lines consist of the edge information.

The last line is the source character S through which the graph has to be traversed.

Output format :
The output is the lexicographical order of traversal using BFS.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N, M ≤ 10

Sample test cases :
Input 1 :
10
10
a y
a z
a p
p c
p b
y m
y l
z h
z g
z i
a
Output 1 :
a p y z b c l m g h i 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0*/
// You are using GCC
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
