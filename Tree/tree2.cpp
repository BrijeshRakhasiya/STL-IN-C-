#include<iostream>

using namespace std;

struct Node
{
    int data ;
    Node* left;
    Node* right;
};

Node* createnode(int data)
{
    Node* newNode = new Node();
    newNode->data = data ;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main()
{
    // LEvel 1
    Node * root = createnode(1);
    // Level 2
    root->left = createnode(2);
    root->right = createnode(3);
    // Level 3
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->left = createnode(6);
    root->right->right = createnode(7);
    // Level 4
    root->left->right->left = createnode(8);
    root->right->right->left = createnode(15);
    return 0;
}