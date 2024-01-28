#include <iostream>
using namespace std;
class flods
{
public:
    int data;
    flods *next;

    flods()
    {
    }

    flods(int val)
    {
        next = NULL;
        data = val;
    }

    void insertatTail(flods *&head, int val)
    {
        flods *n = new flods(val);

        if (head == NULL)
        {
            head = n; // 10
            return;
        }

        flods *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    void insertatHead(flods *&head, int val)
    {
        flods *n = new flods(val);

        n->next = head;
        head = n;
    }

    bool cycle_detection(flods *&head)
    {
        flods *slow = head;
        flods *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next; // 2 steps
            slow = slow->next;       // 1 step

            if (slow == fast)
            {

                return true;
            }
        }
        return false;
    }

    void make_cycle(flods *&head, int value)
    {
        flods *temp = head;
        flods *start;
        int count = 1;

        while (temp->next != NULL)
        {
            if (count == value)
            {
                start = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = start;
    }

    void remove_cycle(flods *&head)
    {
        flods *slow = head;
        flods *fast = head;
        do
        {
            slow = slow->next;
            fast = fast->next->next;

        } while (slow != fast);
        fast = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = NULL;
    }

    void display(flods *head)
    {
        flods *temp = head;
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
    flods n1;
    flods *head = NULL;
    n1.insertatHead(head, 1);
    n1.insertatTail(head, 2);
    n1.insertatTail(head, 3);
    n1.insertatTail(head, 4);
    n1.insertatTail(head, 5);
    n1.insertatTail(head, 6);
    n1.insertatTail(head, 7);
    n1.insertatTail(head, 8);
    n1.insertatTail(head, 9);
    n1.make_cycle(head, 4);
    // n1.display(head);
    bool n2 = n1.cycle_detection(head);
    if (n2 == true)
    {
        cout << "Cycle exists" << endl;
    }
    else
        cout << "Cycle not exits" << endl;
    n1.remove_cycle(head);
    cout << n1.cycle_detection(head) << endl;
    n1.display(head);

    return 0;
}
