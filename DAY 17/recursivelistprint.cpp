// problem 3 for reverse the linked list recrusive stack

// in this prog. we just reverse the element, we did not make the address reverse

#include <iostream>

using namespace std;

class Node
{

public:
    int val;

    Node *next;

    Node(int data)
    {

        val = data;

        next = NULL;
    }
};

class LinkedList
{

public:
    Node *head;

    LinkedList()
    {

        head = NULL;
    }

    void insertAtLast(int value)
    {

        Node *new_node = new Node(value);

        if (head == NULL)
        {

            head = new_node;

            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {

            temp = temp->next;
        }

        // reached at last node

        temp->next = new_node;
    }

    void display()
    {

        Node *temp = head;

        while (temp != NULL)
        {

            cout << temp->val << "->";

            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

void reversePrint(Node *head)
{

    // base case

    if (head == NULL)
    {

        return;
    }

    // recursive case

    reversePrint(head->next);

    cout << head->val << " ";
}

int main()
{

    LinkedList linkedList;

    linkedList.insertAtLast(1);

    linkedList.insertAtLast(2);

    linkedList.insertAtLast(3);

    linkedList.insertAtLast(4);

    linkedList.insertAtLast(5);

    linkedList.display();

    reversePrint(linkedList.head);

    linkedList.display();

    return 0;
}
