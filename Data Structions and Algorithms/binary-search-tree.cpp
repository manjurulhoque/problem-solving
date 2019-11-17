#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data)
{
    struct node* nn = (struct node*)malloc(sizeof(struct node));

    nn->data = data;

    nn->left = NULL;
    nn->right = NULL;
    return nn;
};

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int data)
{
    if(node == NULL) return newNode(data);

    if(data < node->data)
        node->left = insert(node->left, data);
    else if(data > node->data)
        node->right = insert(node->right, data);

    return node;
};

int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inorder(root);

    return 0;
}
