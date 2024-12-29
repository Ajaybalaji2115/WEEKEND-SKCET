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
/ You are using GCC*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 100
// #define max(a,b) ((a)>(b) ? (a) : (b))
// #define min(a,b) ((a)<(b) ? (a) : (b))
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertBST(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertBST(root->left, data);
    } else {
        root->right = insertBST(root->right, data);
    }
    return root;
}

void preorderTraversalAndCalculateDifference(struct Node* root, int &maxVal, int &minVal) {
    //Type your code here
    if(root==NULL)
    return;
    printf("%d",root->data);
    printf("%s"," ");
  if(maxVal<root->data)
  {
      maxVal=root->data;
  }
  if(minVal>root->data)
  {
      minVal=root->data;
  }
   
    preorderTraversalAndCalculateDifference(root->left,maxVal,minVal);
    preorderTraversalAndCalculateDifference(root->right,maxVal,minVal);
    
    
}

int main() {
    struct Node* root = NULL;
    int n, data;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertBST(root, data);
    }

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    preorderTraversalAndCalculateDifference(root, maxVal, minVal);
    printf("\n");

    int difference = maxVal - minVal;
    printf("%d", difference);

    return 0;
}
