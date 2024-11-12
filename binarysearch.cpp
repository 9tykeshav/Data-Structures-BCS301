#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (key < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> v = {6, 5, 4, 2, 77, 8, 55, 4, 66, 7};

    cout << binarySearch(v, 77) << endl;
}