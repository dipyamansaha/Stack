// STACK - LINKED LIST IMPLEMENTATION

#include<iostream>

using namespace std;

class Node
{
    public:

    int data;
    Node* next;
};

Node* top;

void Push(int x)
{
    Node* temp = new Node();

    temp->data = x;
    temp->next = NULL;

    if(top == NULL)
    {
        top = temp;
        return;
    }

    temp->next = top;
    top = temp;
}

void Pop()
{
    if(top == NULL)
        return;

    Node* temp = top;
    top = top->next;

    delete temp;
}

int Top()
{
    return top->data;
}

bool IsEmpty()
{
    if(top == NULL)
        return true;

    return false;
}

void Print()
{
    Node* temp = top;

    cout << "\nThe stack: " << endl;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    top = NULL;

    cout << "\nPerforming some stack operations..." << endl;
    Push(22); Print();
    Push(33); Print();
    Push(55); Print();
    Push(77); Print();
    cout << "\nTop element: " << Top() << endl;

    Pop(); Print();
    cout << "\nTop element: " << Top() << endl;

    Push(111); Print();
    Push(1313); Print();
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
