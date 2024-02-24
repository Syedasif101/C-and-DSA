#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;

void insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
    Node *temp = head;
    cout << "List is: "
         << " ";

    while (temp != NULL)
    {
        cout << temp->data << endl;

        temp = temp->next;
    }
} 

int main()
{
    head = NULL;

    cout << "How many numbers?" << endl;
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number " << endl;

        cin >> x;

        insert(x);
        print();
    }
}