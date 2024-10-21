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

// void Reverse (int A[], int N) {
//     int i=0; int j = N-1;
//     int x ;
//     while (i<j) {
//         x = A[i];
//         A[i] = A[j];
//         A[j] = x ;
//         j--;
//         i++;
//     }
// }

void ReverseR(int Ar[], int A, int B)
{
    int i = A;
    int j = B;
    int x;
    while (i < j)
    {
        x = Ar[i];
        Ar[i] = Ar[j];
        Ar[j] = x;
        j--;
        i++;
    }
}

void RotateArray(int A[], int K, int N)
{
    ReverseR(A, N - K, N - 1);
    ReverseR(A, 0, N - K - 1);
    ReverseR(A, 0, N - 1);
}

void Traverse(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}
void WorstCaseRotateArray(int Ar[], int K, int N)
{
    for (int i = 0; i < K; i++)
    {
        InsertElement(Ar[N - 1], 0, Ar, N);
    }
    Traverse(Ar, 10);
}
int main()
{

    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // RotateArray(A, 4, 10);
    // Traverse(A, 10);
    WorstCaseRotateArray(A, 4, 10);

    return 0;
}