/*Single File Programming Question
Problem Statement



Given a text txt [0 . . . N-1] and a pattern pat [0 . . . M-1], write a function search (char pat [], char txt []) that prints all occurrences of pat [] in txt []. You may assume that N > M. Use zero-based indexing while returning the indices. 



Example:



Input:  txt [] = “THIS IS A TEST TEXT”, pat [] = “TEST”

Output: Pattern found at index 10



Input:  txt [] = “AABAACAADAABAABA”, pat [] = “AABA”

Output: Pattern found at index 0, Pattern found at index 9, Pattern found at index 12





Input format :
The first line of input consists of a string txt, in which the pattern is to be searched.

The second line of input consists of a string pat, the pattern that needs to be found in the text.

Output format :
For each occurrence of the pattern in the text, print "Pattern found at index X" in a new line, where X the indices where the pattern is found within the text string.



Refer to the sample output for the formatting specifications.

Code constraints :
The text and the pattern will only contain uppercase and lowercase English letters.

1 ≤ length of txt ≤ 50

1 ≤ length of pat ≤ 10

Sample test cases :
Input 1 :
THIS IS A TEST TEXT
TEST
Output 1 :
Pattern found at index 10
Input 2 :
AABAACAADAABAABA
AABA
Output 2 :
Pattern found at index 0
Pattern found at index 9
Pattern found at index 12
Input 3 :
agd
g
Output 3 :
Pattern found at index 1
Input 4 :
ABABDABACDABABCABAB
ABABCABAB
Output 4 :
Pattern found at index 10
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10

Negative Marks : 0*/// You are using GCC
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
