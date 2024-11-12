#include <iostream>
#include <vector>
using namespace std;
vector<int> countingSort(vector<int> A, int k)
{
    vector<int> table(0, k + 1);
    vector<int> toReturn(0, A.size());
    for (int i = 0; i < A.size(); i++)
    {
        table[A[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        table[i] = table[i] + table[i - 1];
    }
    for (int j = A.size() - 1; j != 0; j--)
    {
        toReturn[table]
    }
}
int main()
{
    return 0;
}