// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Stack
{
    char Item[MAX_SIZE];
    int Top;
};
struct Stack S;

void Initialise()
{
    S.Top = -1;
}

int IsEmpty()
{
    if (S.Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char x)
{
    if (S.Top == MAX_SIZE - 1)
    {
        printf("OVERFLOW");
        exit(1);
    }
    else
    {
        S.Top++;
        S.Item[S.Top] = x;
    }
}

int pop()
{
    if (IsEmpty())
    {
        printf("UNDERFLOW");
        exit(1);
    }
    char x = S.Item[S.Top];
    S.Top--;
    return x;
}

int seek()
{
    return S.Item[S.Top];
}

void Reverse()
{
    // TODO: take input from user
    char str[10] = "Keshav";
    Initialise();
    int i = 0;
    while (str[i] != '\0')
    {
        push(i);
        i++;
    }
    int i = 0;
    while (!IsEmpty)
    {
        continue;
    }
}

int main()
{

    Reverse();
    printf("Try programiz.pro");

    return 0;
}