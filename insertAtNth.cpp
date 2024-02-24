#include <iostream>
using namespace std;
void insertAtTheNth(int array[], int key, int pos, int n)
{
    for (int i = n - 1; i >= pos; i--)
    {
        array[i + 1] = array[i];

        array[pos] = key;
    }
}

int main()
{

    int array[] = {10, 34, 45, 424, 22, 32, 3};
    int n = 7;

    cout << "Array before insertion";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int key = 75;
    int pos = 3;
    insertAtTheNth(array, key, pos, n);
    n++;

    cout << "Array after insertion : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}