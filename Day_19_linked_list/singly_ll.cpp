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

void insertAtBegining(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    cout << endl;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
    cout << endl;
}

void insertAtEnd(Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = temp;
}

void insertAtPos(Node *&head, int data, int position)
{
    Node *temp = new Node(data);

    // Case 1: Insert at head
    if (position == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *pointer = head;
    int count = 1;

    // Traverse until the node just before the desired position
    while (pointer != NULL && count < position - 1)
    {
        pointer = pointer->next;
        count++;
    }

    // If position is beyond list size
    if (pointer == NULL)
    {
        cout << "Position out of range!" << endl;
        delete temp;
        return;
    }

    // Insert node at position
    temp->next = pointer->next;
    pointer->next = temp;
}


void deleteFromBegining(Node* &head){

    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}

void deleteFromEnd(Node *&head)
{
    if (head == NULL)
    {
        return; // Empty list
    }

    if (head->next == NULL)
    {
        // Only one node in the list
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

void deleteAtPos(Node* &head,int position){
    if(head==NULL){
        cout<<"linked list is empty";
        return;
    }
    
    Node* pointer=head;
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int count=1;
    while(count<position-1 && pointer->next!=NULL){
        pointer=pointer->next;
        count++;

    }
    
    Node* temp=pointer->next;
    pointer->next=temp->next;
    delete temp;

}

void searchData(Node *head, int value)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }

    Node *temp = head;
    int count = 1; // Start counting positions from 1

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            cout << "Data is present at position " << count;
            return;
        }
        temp = temp->next;
        count++;
    }

    cout << "Data not found in the list";
}

int main()
{

    Node *head = NULL;

    while (1)
    {
        cout << "========== Linked List Operations ==========" << endl;
        cout << "Press 1   Insert at Beginning" << endl;
        cout << "Press 2   Insert at End" << endl;
        cout << "Press 3   Insert at Specific Position" << endl;
        cout << "Press 4   Delete from Beginning" << endl;
        cout << "Press 5   Delete from End" << endl;
        cout << "Press 6   Delete from Specific Position" << endl;
        cout << "Press 7   Search for an Element" << endl;
        cout << "Press 8   Update an Element" << endl;
        cout << "Press 9   Display the Linked List" << endl;
        cout << "Press 10  Count the Number of Nodes" << endl;
        cout << "Press 11  Reverse the Linked List" << endl;
        cout << "Press 12  Sort the Linked List" << endl;
        cout << "Press 13  Exit the Program" << endl;
        cout << "============================================" << endl;
        cout << "Enter your choice: ";

        int input;
        cin >> input;
        switch (input)
        {
        case 1:
        {
            int data;
            cout << "Enter your value->";
            cin >> data;
            insertAtBegining(head, data);
            break;
        }
        case 2:
        {
            int data;
            cout << "Enter your value to insert at the end->";
            cin >> data;
            insertAtEnd(head, data);
            break;
        }
        case 3:
        {
            int data;
            int position;
            cout << "Enter Your data and then postion->";
            cin >> data;
            cin >> position;
            insertAtPos(head, data, position);
        }
        case 4:{
            deleteFromBegining(head);
        }
        case 5:{
            deleteFromEnd(head);
        }
        case 6:{
            int position;
            cout<<"Enter Your Postion->";
            cin>>position;
            deleteAtPos(head,position);
        }
        case 7:{
            cout<<"Enter Your NUmber:";
            int data;
            cin>>data;
            searchData(head,data);
        }
        case 9:
            print(head);
            break;

        default:
            break;
        }
    }

    return 0;
}