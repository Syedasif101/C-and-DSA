#include <iostream>
using namespace std;

class LinearSearch
{
public:
    int searchKey(int arr[], int key, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    LinearSearch obj;

    int n, arr[n], key;
    cout << "Enter the size of an array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " index" << endl;
        cin >> arr[i];
    }
    cout << "The Array you enetered is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter the number you want to search " << endl;
    cin >> key;

    int result = obj.searchKey(arr, key, n);
    (result == -1)
        ? cout << "Element not found "
        : cout << " Element found at index " << result;
}