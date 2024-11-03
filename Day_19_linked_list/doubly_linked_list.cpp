#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *pre;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
};
// printing the linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// getting length of the linked list
int getlen(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        len = len + 1;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
}
int main()

{

    int choice, value, pos;
    Node *head = NULL;

    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Insert at Head\n";
        cout << "2. Insert at Tail\n";
        cout << "3. Delete at Position\n";
        cout << "4. Display List\n";
        cout << "5. Clear List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at head: ";
            cin >> value;
            insertAtHead(head, value);
            print(head);
            break;

        case 2:
            cout << "Enter value to insert at tail: ";
            cin >> value;
            // insertAtTail(value);
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> pos;
            // deleteAtPosition(pos);
            break;

        case 4:
            // display();
            break;

        case 5:
            // clear();
            break;

        case 6:
            cout << "Exiting program." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        return 0;
    }
}