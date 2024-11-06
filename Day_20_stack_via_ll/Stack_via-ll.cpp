#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
};

// Stack class with linked list implementation
class Stack
{
private:
    Node *top; // Pointer to the top element in the stack

public:
    // Constructor initializes an empty stack
    Stack()
    {
        top = nullptr;
    }

    // Push operation to add an element to the stack
    void push(int value)
    {
        Node *newNode = new Node(); // Create a new node
        newNode->data = value;      // Set data for the new node
        newNode->next = top;        // Link new node with top
        top = newNode;              // Update top to the new node
        cout << "Pushed " << value << " onto the stack." << endl;
    }

    // Pop operation to remove the top element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node *temp = top; // Temporary node to hold the top
        top = top->next;  // Move top to the next element
        cout << "Popped " << temp->data << " from the stack." << endl;
        delete temp; // Free memory for the old top
    }

    // Peek operation to display the top element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }

    // Display the entire stack
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        Node *current = top;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;
    int choice, value;

    do
    {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
