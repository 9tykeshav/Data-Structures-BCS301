// Online C compiler to run C program online
#include <stdio.h>

void InsertElement(int x, int i, int A[], int N)
{
    for (int j = N - 1; j >= i; j--)
    {
        A[j + 1] = A[j];
    }
    A[i] = x;
}

void InsertElementSorted(int x, int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (x < A[i])
        {
            InsertElement(x, i, A, N);
            return;
        }
        else if (x == A[i])
        {
            while (x == A[i])
            {
                i++;
                A[i] = x;
                break;
            }
        }
    }
}

void Traverse(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

int main()
{

    int a[10] = {1, 3, 4, 5, 7};
    Traverse(a, 5);
    // InsertElement(4,1,a,5);
    // Traverse(a, 6);
    InsertElementSorted(6, a, 5);
    Traverse(a, 6);

    return 0;
}