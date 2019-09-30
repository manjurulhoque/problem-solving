#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void push(int x)
{
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node*));
    tmp->data = x;
    tmp->link = top;
    top = tmp;
}

void pop()
{
    struct Node* temp = top;
    if (top == NULL)
        return;
    top=top->link;
    free(temp);
}

void print()
{
    struct Node* temp = top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("\n");

}

int isEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}

int main()
{
    push(2);
    push(4);
    push(7);
    push(22);
    print();

    return 0;
}
