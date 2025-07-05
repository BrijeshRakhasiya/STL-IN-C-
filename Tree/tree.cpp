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
    Node * root = createnode(1);

    root->left = createnode(2);
    root->right = createnode(3);

    root->left->left = createnode(4);
    return 0;
}