#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (x > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 4, 6, 8, 10, 20};
    int x = 20;

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = BinarySearch(arr, 0, size - 1, x);

    (result == -1)
        ? cout << "Element not found"
        : cout << "Element found at index " << result;
}