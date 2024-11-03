#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Initialize a queue of integers
    queue<int> q;

    // 1. push(value) - adds an element to the back of the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue after push(10, 20, 30):" << endl;

    // Displaying queue content using a loop
    queue<int> temp = q; // Use a temp queue for printing as pop() modifies the original queue
    while (!temp.empty())
    {
        cout << temp.front() << " "; // Access the front element
        temp.pop();                  // Remove the front element
    }
    cout << endl;

    // 2. front() - returns the front element of the queue
    cout << "Front element: " << q.front() << endl;

    // 3. back() - returns the back element of the queue
    cout << "Back element: " << q.back() << endl;

    // 4. pop() - removes the front element of the queue
    q.pop();
    cout << "Queue after pop() (front element removed):" << endl;
    temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // 5. size() - returns the number of elements in the queue
    cout << "Queue size: " << q.size() << endl;

    // 6. empty() - checks if the queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Additional example:
    // Emptying the queue completely and checking empty() again
    q.pop(); // Remove another element
    q.pop(); // Now queue should be empty
    cout << "Queue after all pops (now it should be empty):" << endl;
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
