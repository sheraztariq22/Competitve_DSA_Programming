

#include <iostream>

using namespace std;

class node
{
public:
    node *next;
    int data;

    node(int val)
    {
        next = NULL;
        data = val;
    }

    void insertatTail(node *&head, int val)
    {
        node *n = new node(val);

        if (head == NULL)
        {
            head = n; // 10
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    void insertatHead(node *&head, int val)
    {
        node *n = new node(val);

        n->next = head;
        head = n;
    }

    void searchKey(node *&head, int key)
    {

        // searching wala nazar araha heh
        node *temp = head;

        while (temp != NULL)
        {

            if (temp->data == key)
            {
                cout << "Element is found in linked list" << endl;
            }
            temp = temp->next;
        }
    }

    void deletion(node *&head, int val)
    {
        node *temp = head;

        while (temp->next->data != val)
        {
            temp = temp->next;
        }

        node *del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }

    void deleteAtHead(node *&head, int val)
    {
        node *temp = head;
        temp = head;
        head = temp->next;

        delete temp;
    }

    node *reverseLinkedlist(node *&head)
    {
        node *prevPtr = NULL;
        node *currPtr = head;
        node *nextPtr;

        while (currPtr != NULL)
        {
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;

            // reverse ka logic
            prevPtr = currPtr;
            currPtr = nextPtr;
        }

        return prevPtr;
    }

    void display(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        { // 3->4->5
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    node n1(4);
    node *head = NULL;
    n1.insertatHead(head, 0);
    n1.insertatTail(head, 4);
    n1.insertatTail(head, 3);
    n1.insertatTail(head, 5);

    cout << "insertion in linked list:" << endl;
    n1.display(head);
    cout << "Reverse a linked list:" << endl;
    node *newhead = n1.reverseLinkedlist(head);
    n1.display(newhead);
    cout << "Searching in linked list:" << endl;
    n1.searchKey(head, 4);
    cout << "Deletion at any point except head:" << endl;
    n1.deletion(head, 5);

    n1.display(head);

    cout << "Deletion ad head:" << endl;
    n1.deleteAtHead(head, 0);
    n1.display(head);

    return 0;
}
