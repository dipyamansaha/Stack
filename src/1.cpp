// STACK - ARRAY IMPLEMENTATION

#include<iostream>

using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if(top == MAX_SIZE - 1)
    {
        cout << "\nStack overflow!" << endl;
        return;
    }

    A[++top] = x;
}

void Pop()
{
    if(top == -1)
    {
        cout << "\nNo element to pop!" << endl;
        return;
    }

    top--;
}

int Top()
{
    return A[top];
}

bool IsEmpty()
{
    if(top == -1)
        return true;

    return false;
}

void Print()
{
    cout << "\nThe stack: " << endl;
    for(int i=0; i<=top; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    cout << "Performing some stack operations..." << endl;
    Push(2); Print();
    Push(3); Print();
    Push(5); Print();
    Push(7); Print();
    cout << "\nTop element: " << Top() << endl;

    Pop(); Print();
    cout << "\nTop element: " << Top() << endl;

    Push(11); Print();
    Push(13); Print();
    cout << "\nTop element: " << Top() << endl;

    Pop(); Print();
    Pop(); Print();

    if(IsEmpty())
        cout << "\nEmpty stack!" << endl;
    else
        cout << "\nStack NOT empty yet!" << endl;

    Pop(); Print();
    Pop(); Print();
    cout << "\nTop element: " << Top() << endl;

    Pop(); Print();

    if(IsEmpty())
        cout << "\nEmpty stack!" << endl;
    else
        cout << "\nStack NOT empty yet!" << endl;
}
