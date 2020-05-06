// CHECKING FOR BALANCED PARENTHESES USING STACK

#include<iostream>
#include<stack>

using namespace std;

bool CheckBalancedParentheses(string str)
{
    int i = 0;

    stack<char> S;

    for(i=0; i<str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            S.push(str[i]);

        if(S.empty())
            return false;

        switch(str[i])
        {
            case ')':
                if(S.top()!='(')
                    return false;
                S.pop();
                break;

            case ']':
                if(S.top()!='[')
                    return false;
                S.pop();
                break;

            case '}':
                if(S.top()!='{')
                    return false;
                S.pop();
                break;
        }
    }

    return S.empty() ? true : false;
}

int main()
{
    string str;

    cout << "Enter a string full of parentheses: ";
    getline(cin, str);

    if(CheckBalancedParentheses(str))
        cout << "Parentheses balanced!" << endl;
    else
        cout << "Parentheses NOT balanced!" << endl;
}
