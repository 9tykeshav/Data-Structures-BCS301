// PROGRAM FOR IMPLMENTING CIRCULAR QUEUE.

#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 10
#define TRUE 1
#define FALSE 0

struct CQueue
{
    int rear;
    int front;
    int Items[MAXQUEUE];
};

struct CQueue CQ;

void initiailise()
{
    CQ.rear = MAXQUEUE - 1;
    CQ.front = MAXQUEUE - 1;
}

int IsEmpty()
{
    if (CQ.front == CQ.rear)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void EnQueue(int x)
{
    if ((CQ.rear + 1) % MAXQUEUE == CQ.front)
    {
        printf("OVERFLOW ");
        exit(1);
    }
    CQ.rear = (CQ.rear + 1) % MAXQUEUE;
    CQ.Items[CQ.rear] = x;
}

int DeQueue()
{
    if (IsEmpty())
    {
        printf("UNDERFLOW");
        exit(1);
    }
    CQ.front = (CQ.front + 1) % MAXQUEUE;
    return CQ.Items[CQ.front];
}

int main()
{

    initiailise();
    for (int i = 0; i < 9; i++)
    {
        EnQueue(i);
    }
    for (int i = 0; i < 11; i++)
    {
        int x = DeQueue();
        printf("%d\n", x);
    }

    return 0;
}