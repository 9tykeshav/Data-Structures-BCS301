#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high + 1;
    do
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;

        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }

    } while (i < j);
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int j = partition(arr, low, high);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main()
{
    vector<int> v = {6, 5, 4, 2, 77, 8, 55, 4, 66, 7};
    v.push_back(100); // INT_MAX
    quickSort(v, 0, v.size() - 1);
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << endl;
    }
}