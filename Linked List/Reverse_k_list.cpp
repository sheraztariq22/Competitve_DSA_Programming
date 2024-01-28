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

    node *reverse_K_list(node *&head, int k)
    {
       

        //     1  2  3  4   5  6  7
        // Nu  cu ne
        node *prevPtr = NULL;
        node *currPtr = head;
        node *nextPtr;

        int count = 0;

        while (currPtr != NULL & count < k)
        {
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;

            // reverse ka logic
            prevPtr = currPtr;
            currPtr = nextPtr;
            count++;
        }
        if (nextPtr != NULL)
        {
            head->next = reverse_K_list(nextPtr, k);
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

    n1.display(head);
    int k = 2;

    
     node *newhead = n1.reverse_K_list(head,k);
     n1.display(newhead);

    return 0;
}
