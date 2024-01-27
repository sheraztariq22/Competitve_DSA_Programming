

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
    n1.insertatHead(head, 7);
    n1.insertatHead(head, 0);
    n1.insertatTail(head, 3);
    n1.insertatTail(head, 4);
    n1.insertatTail(head, 5);

    n1.searchKey(head, 9);

    n1.display(head);

    return 0;
}
