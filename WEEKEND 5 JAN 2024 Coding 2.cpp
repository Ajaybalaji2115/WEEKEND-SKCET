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
int main()
{
    list<int>l;
    string str;
    getline(cin,str);
    int n=str.length();
    if(str.empty())
    return 0;
    l.push_back(1);
int z=1;
    for(int i=0;i<n;i++)
    {
       if(str[i]=='D')
       {
           if(i-1>=0 && str[i-1]=='I')
           {
               int k=l.back();
               l.pop_back();
               z++;
               l.push_back(z);
               l.push_back(k);
           }
           else
           {
               z++;
               l.push_front(z);
           }
          
       }
       else if(str[i]=='I')
       {
           z++;
           l.push_back(z);
       }
       else
       {
           cout<<"Invalid input";
           return 0;
       }
    }
    for(int x:l)
    {
        cout<<x;
    }
}
