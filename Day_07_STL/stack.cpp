#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Initialize a stack of integers
    stack<int> s;

    // 1. push(value) - adds an element to the top of the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack after push(10, 20, 30):" << endl;

    // Displaying stack content using a loop
    stack<int> temp = s; // Use a temp stack for printing as pop() modifies the original stack
    while (!temp.empty())
    {
        cout << temp.top() << " "; // Access the top element
        temp.pop();                // Remove the top element
    }
    cout << endl;

    // 2. top() - returns the top element of the stack
    cout << "Top element: " << s.top() << endl;

    // 3. pop() - removes the top element of the stack
    s.pop();
    cout << "Stack after pop() (top element removed):" << endl;
    temp = s;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // 4. size() - returns the number of elements in the stack
    cout << "Stack size: " << s.size() << endl;

    // 5. empty() - checks if the stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Additional example:
    // Emptying the stack completely and checking empty() again
    s.pop(); // Remove the remaining element
    cout << "Stack after another pop (now it should be empty):" << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
