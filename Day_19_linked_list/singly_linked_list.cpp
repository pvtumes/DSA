#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        ;
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

void InsertAtpos(Node *&head, int data, int index)
{
    Node *temp = new Node(data);

    // Case 1: Insert at the head position
    if (index == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *current = head;
    int count = 1;

    // Traverse to the node just before the desired index
    while (current != NULL && count < index - 1)
    {
        current = current->next;
        count++;
    }

    // Check if index is out of bounds
    if (current == NULL)
    {
        cout << "Index out of bounds." << endl;
        delete temp; // Avoid memory leak
        return;
    }

    // Insert the new node at the specified position
    temp->next = current->next;
    current->next = temp;
}

void deleteAtpos(Node *&head, int pos)
{
    if (!head || pos <= 0)
    {
        // If the list is empty or position is invalid
        return;
    }

    Node *temp = head;

    // If the node to be deleted is the head node
    if (pos == 1)
    {
        head = head->next;
        delete temp;
        return;
    }

    int count = 1;
    // Traverse to the node just before the one to delete
    while (count < pos - 1 && temp->next != nullptr)
    {
        temp = temp->next;
        count++;
    }

    // Check if the next node is valid
    if (temp->next == nullptr)
    {
        // Position is greater than the number of nodes
        return;
    }

    Node *todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
}

int main()
{
    Node *head = NULL;
    int loop = 1;
    int choice;
    while (loop)
    {

        cout << "Enter 1 to add element at the head" << endl;
        cout << "Enter 2 to add element at the tail" << endl;
        cout << "Enter 3 to add element at the specific position" << endl;
        cout << "Enter 4 to delete element at the specific position" << endl;
        cout << "Enter 5 to stop";
        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "element the data:";
            cin >> data;
            InsertAtHead(head, data);
            print(head);
            break;
        }
        case 2:
        {
            int data;
            cout << "element the data:";
            cin >> data;
            InsertAtTail(head, data);
            print(head);
            break;
        }
        case 3:
        {
            int data;
            int index;
            cout << "element the data:";
            cin >> data;
            cout << "element the position:";
            cin >> index;
            InsertAtpos(head, data, index);
            break;
        }
        case 4:
        {

            int index;
            cout << "element the position:";
            cin >> index;
            deleteAtpos(head, index);
            break;
        }
        case 5:
        {
            loop = 0;
            break;
        }
        default:
        {
            cout << "Enter the valid option:";
            break;
        }
        }
    }

    return 0;
}