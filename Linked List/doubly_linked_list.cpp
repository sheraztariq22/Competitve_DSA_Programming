#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *pre;
    node *next;

    node(int val)
    {
        data = val;
        pre = NULL;
        next = NULL;
    }
};
void insertion_head(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    if (head != NULL)
    {
        head->pre = newnode;
    }
    head = newnode;
}
void insetion_tail(node *&head, int val)
{
    if (head == NULL)
    {
        insertion_head(head, val);
        return;
    }
    node *newnode = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->pre = temp;
}

void display(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletion_head(node *&head)
{
    node *temp = head;
    head = head->next;
    head->pre = NULL;

    delete temp;
}

void deletion(node *&head, int pos)
{
    node *temp = head;
    int count = 1;

    if (pos == 1)
    {
        deletion_head(head);
        return;
    }

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->pre->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->pre = temp->pre;
    }

    delete temp;
}

int main()
{
    node *head = NULL;
    insetion_tail(head, 4);
    insetion_tail(head, 5);
    insetion_tail(head, 3);
    insetion_tail(head, 3);
    display(head);
    insertion_head(head, 0);
    display(head);
    

    deletion_head(head);
    display(head);
    deletion(head,2);
    display(head);

    return 0;
}
