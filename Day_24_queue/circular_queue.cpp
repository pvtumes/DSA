#include <iostream>
using namespace std;

#define SIZE 5 // Size of the circular queue

class CircularQueue
{
private:
    int arr[SIZE]; // Array to store queue elements
    int front;     // Points to the front of the queue
    int rear;      // Points to the rear of the queue

public:
    // Constructor
    CircularQueue()
    {
        front = rear = -1; // Queue is initially empty
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return (front == -1);
    }

    // Check if the queue is full
    bool isFull()
    {
        return (front == (rear + 1) % SIZE);
    }

    // Enqueue: Add an element to the queue
    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full! Cannot add " << data << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0; // Initialize front and rear for first element
        }
        else
        {
            rear = (rear + 1) % SIZE; // Move rear circularly
        }

        arr[rear] = data;
        cout << "Enqueued: " << data << endl;
    }

    // Dequeue: Remove an element from the queue
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty! Cannot dequeue." << endl;
            return -1;
        }

        int removedData = arr[front];

        if (front == rear)
        {
            // Only one element was in the queue, now reset to empty
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE; // Move front circularly
        }

        cout << "Dequeued: " << removedData << endl;
        return removedData;
    }

    // Get the front element
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the rear element
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Display the elements in the queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;          // Stop at the rear element
            i = (i + 1) % SIZE; // Move circularly
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display(); // Should show all 5 elements

    q.enqueue(60); // Should print "Queue is Full!"

    q.dequeue();
    q.dequeue();

    q.display(); // Remaining elements

    q.enqueue(60);
    q.enqueue(70);

    q.display(); // New elements added circularly

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    return 0;
}
