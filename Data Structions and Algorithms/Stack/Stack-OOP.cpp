#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int MAXSIZE = 5;
    int arr[8];
    int top = -1;

public:
    void push(int data);
    void pop();
    bool isFull();
    bool isEmpty();
};

bool Stack::isFull()
{
    return (top == MAXSIZE) ? true : false;
}

bool Stack::isEmpty()
{
    return (top == -1) ? true : false;
}

void Stack::push(int data)
{
    if(isFull())
    {
        cout<<"Stack is full!"<<endl;
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

void Stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty!"<<endl;
    }
    else
    {
        cout<<arr[top--]<<endl;
    }
}

int main()
{
    Stack sk;
    for(int i = 10; i <= 15; i++) {
        sk.push(i);
    }

    sk.pop();
    sk.pop();
    sk.pop();

    return 0;
}
