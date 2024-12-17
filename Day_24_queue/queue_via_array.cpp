#include <iostream>
using namespace std;

#define SIZE 100
int arr[SIZE];
int front = -1;
int rear = -1;

// Enqueue: Add element to the queue
void enqueue(int data)
{
    if ((rear + 1) % SIZE == front) // Queue is full
    {
        cout << "Queue is full!" << endl;
    }
    else
    {
        if (front == -1) // If queue is empty, initialize front and rear to 0
        {
            front = 0;
        }
        rear = (rear + 1) % SIZE; // Move rear to the next position (circularly)
        arr[rear] = data;
        cout << data << " added to the queue" << endl;
    }
}

// Dequeue: Remove element from the queue
int dequeue()
{
    if (front == -1) // Queue is empty
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    else
    {
        int ans = arr[front];
        if (front == rear) // Only one element in the queue
        {
            front = rear = -1; // Reset the queue to empty
        }
        else
        {
            front = (front + 1) % SIZE; // Move front to the next position (circularly)
        }
        return ans;
    }
}

// Front: Get the front element of the queue
int getFront()
{
    if (front == -1) // Queue is empty
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    else
    {
        return arr[front];
    }
}

// Rear: Get the rear element of the queue
int getRear()
{
    if (rear == -1) // Queue is empty
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    else
    {
        return arr[rear];
    }
}

// isEmpty: Check if the queue is empty
bool isEmpty()
{
    return front == -1;
}

// Size: Get the number of elements in the queue
int size()
{
    if (front == -1) // Queue is empty
    {
        return 0;
    }
    else if (rear >= front)
    {
        return rear - front + 1;
    }
    else
    {
        return SIZE - front + rear + 1;
    }
}

int main()
{
    // Test the circular queue operations
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout << "Front element: " << getFront() << endl; // Should print 10
    cout << "Rear element: " << getRear() << endl;   // Should print 40
    cout << "Size of queue: " << size() << endl;     // Should print 4

    cout << "Dequeue: " << dequeue() << endl; // Should remove 10
    cout << "Dequeue: " << dequeue() << endl; // Should remove 20

    enqueue(50); // Should add 50
    enqueue(60); // Should add 60

    cout << "Size of queue after enqueue: " << size() << endl; // Should print 4

    cout << "Front element after enqueue: " << getFront() << endl; // Should print 30
    cout << "Rear element after enqueue: " << getRear() << endl;   // Should print 60

    return 0;
}
