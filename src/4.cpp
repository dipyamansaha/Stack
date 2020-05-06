// STRING (C++-TYPE) REVERSE USING STACK

#include<iostream>
#include<stack>

using namespace std;

void Reverse(string &str)
{
    stack<char> S;

    for(int i=0; i<str.length(); i++)
    {
        S.push(str[i]);
    }

    for(int i=0; i<str.length(); i++)
    {
        str[i] = S.top();
        S.pop();
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    Reverse(str);
    cout << "The reversed string is: " << str;
}
