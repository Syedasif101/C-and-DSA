#include <iostream>
using namespace std;
int insert(int arr[], int capacity, int n, int key)
{
    if (n >= capacity)
        return n;

    arr[n] = key;
    return (n + 1);
}
int main()
{
    int arr[10] = {23, 54, 65, 32, 75, 54};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6, key = 32;
    cout << "Array before insertion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nArray after insertion" << endl;
    n = insert(arr, capacity, n, key);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}