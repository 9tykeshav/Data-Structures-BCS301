// program for checking precedence for infix to prefix conversion & converting.

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

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

void InfixToPrefix(string Infix)
{
    string Prefix;
    int i = 0;
    stack<char> s;
    reverse(Infix.begin(), Infix.end());
    while (i < Infix.size())
    {
        char symb;
        symb = Infix[i];
        i++;
        if (symb >= 'a' && symb <= 'z')
        {
            Prefix = Prefix + symb;
        }
        else
        {
            while (!s.empty() && !prcd(symb, s.top()))
            {
                Prefix = Prefix + s.top();
                s.pop();
            }
            s.push(symb);
        }
    }

    while (!s.empty())
    {
        Prefix = Prefix + s.top();
        s.pop();
    }
    reverse(Prefix.begin(), Prefix.end());
    cout << Prefix;
}

int main()
{
    string infix;
    cin >> infix;
    InfixToPrefix(infix);
    return 0;
}
