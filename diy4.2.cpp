#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        a = new int[size];
    }

    void push(int x)
    {
        if(top == size - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            a[top] = x;
        }
    }

    void pop()
    {
        if(top == -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "Popped: " << a[top] << endl;
            top--;
        }
    }

    void display()
    {
        for(int i = top; i >= 0; i--)
            cout << a[i] << " ";

        cout << endl;
    }

    ~Stack()
    {
        delete[] a;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}