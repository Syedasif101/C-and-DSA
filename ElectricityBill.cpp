#include <iostream>
using namespace std;

class Node
{
public:
    float data;
    Node *next;
};

float calDiscount(int units, int rate)
{
    float discount = 2.0f / 100.0f * rate * units;
    return discount;
}

void insertMoney(Node *&head, int money)
{
    Node *newNode = new Node();
    newNode->data = money;
    /*
    newNode->data = money;
    newNode->next = head;
    head = newNode; */
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head)
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
    int units, rate;
    float discount, totalMoney;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the units consumed : " << endl;
        cin >> units;
        cout << "Enter the rate per unit : " << endl;
        cin >> rate;
        discount = calDiscount(units, rate);
        totalMoney = rate * units - discount;
        insertMoney(head, totalMoney);
    }
    print(head);
    return 0;
}