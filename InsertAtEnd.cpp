#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtBegining(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

bool searchElement(Node *head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 7);
    insertAtBegining(head, 10);
    insertAtBegining(head, 1);
    display(head);
    cout << searchElement(head, 20) << endl;
    cout << searchElement(head, 7);

    // int num;
    // cin>>num;
    // insertAtBegining(head, num);
    // display(head);
    return 0;
}