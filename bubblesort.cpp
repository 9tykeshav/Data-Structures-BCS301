#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    bool sorted = true;
    int n = arr.size();
    for (int i = 1; i < arr.size() && sorted == true; i++)
    {
        sorted = false;
        for (int j = 0; j < (arr.size()); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = true;
            }
        }
    }
}
int main()
{
    vector<int> v = {6, 5, 4, 2, 77, 8};
    bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}