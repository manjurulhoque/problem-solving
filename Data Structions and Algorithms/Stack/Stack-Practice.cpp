#include<bits/stdc++.h>
using namespace std;

int MAXSIZE = 5;
int arr[8];
int top = -1;

bool isFull()
{
    if(top == MAXSIZE) return true;
    else return false;
}

bool isEmpty()
{
    return (top == -1) ? true : false;
}

void push(int data)
{
    if(isFull()) {
        cout<<"Stack is full"<<endl;
    }
    else {
        top++;
        arr[top] = data;
        cout<<"Pushed: "<<data<<endl;
    }
}

void pop()
{
    if(!isEmpty()) {
        int tmp = arr[top];
        top--;
        cout<<tmp<<endl;
    } else {
        cout<<"Stack is empty"<<endl;
    }
}

void display()
{
    while(!isEmpty()) {
        pop();
    }
}

int main()
{
    for(int i = 1; i <= MAXSIZE; i++) {
        push(i);
    }

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    return 0;
}
