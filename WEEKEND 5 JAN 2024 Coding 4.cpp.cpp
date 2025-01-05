/*Single File Programming Question
Problem Statement



Thilak is studying binary search trees (BSTs) and wants to implement a program that constructs a binary search tree from a given set of characters. He aims to perform a pre-order traversal of the constructed tree to understand its structure better.



Your task is to help Thilak by designing a program that accomplishes this.

Input format :
The first line of input consists of an integer N, representing the number of characters to be inserted into the BST.

The second line consists of N space-separated characters, representing the data elements to be inserted into the BST.

Output format :
The output prints the pre-order traversal of the constructed BST.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 10

Characters are uppercase English alphabets ('A' - 'Z').

Sample test cases :
Input 1 :
5
C A E B D
Output 1 :
C A B E D 
Input 2 :
8
U Y T D K L X W
Output 2 :
U T D K L Y X W 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0// You are using GCC*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    Node* left;
    Node* right;
    Node(char val):data(val),left(nullptr),right(nullptr){}
};
Node* insert(Node* root,char data)
{
    if(!root)
    return new Node(data);
    if(data<root->data)
    root->left=insert(root->left,data);
    else if(data>root->data)
    root->right=insert(root->right,data);
    return root;
}
void preorder(Node* root)
{
    if(!root)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    int n;
    cin>>n;
    Node* root=NULL;
    for(int i=0;i<n;i++)
    {
        char data;
        cin>>data;
        root=insert(root,data);
        
    }
    preorder(root);
}
