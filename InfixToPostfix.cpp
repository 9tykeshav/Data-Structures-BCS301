// program for checking precedence for infix to postfix conversion & converting.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool prcd(char x, char y)
{
    if (x == '(' || y == '(')
    {
        return false;
    }
    if (y == ')')
    {
        return true;
    }
    if (x == '^' || x == '*' || x == '/' || x == '%')
    {
        if (y == '^')
        {
            return false;
        }
        return true;
    }
    else
    {
        if (x == '+' || x == '-')
        {
            if (y == '+' || y == '-')
            {
                return true;
            }
            return false;
        }
    }
}

void InfixToPostfix(string Infix)
{
    string postfix;
    int i = 0;
    stack<char> s;
    while (i < Infix.size())
    {
        char symb;
        symb = Infix[i];
        i++;
        if (symb >= 'a' && symb <= 'z')
        {
            postfix = postfix + symb;
        }
        else
        {
            while (!s.empty() && prcd(s.top(), symb))
            {
                postfix = postfix + s.top();
                s.pop();
            }
            if (symb == ')')
            {
                s.pop();
            }
            else
            {
                s.push(symb);
            }
        }
    }

    while (!s.empty())
    {
        postfix = postfix + s.top();
        s.pop();
    }
    cout << postfix;
}

int main()
{
    string infix;
    cin >> infix;
    InfixToPostfix(infix);
    return 0;
}
