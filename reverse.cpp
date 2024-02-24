#include <iostream>
using namespace std;
int main()
{
    int array[] = {7, 5, 3, 2, 3, 6, 8, 7};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    {
    }
}