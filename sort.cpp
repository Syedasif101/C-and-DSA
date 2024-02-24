#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 6, 4, 10, 3, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}