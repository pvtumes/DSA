#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    // 1. Push elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue after pushes: ";
    cout << q.front() << " " << q.back() << endl;

    // 2. Pop an element from the queue
    q.pop();
    cout << "Queue after pop: ";
    cout << q.front() << " " << q.back() << endl;

    // 3. Access front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // 4. Check if the queue is empty
    if (q.empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    // 5. Get the size of the queue
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
