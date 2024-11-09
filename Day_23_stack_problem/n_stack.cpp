#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class NStack
{
    int *arr;     // Array to store elements
    int *top;     // Array to store index of top elements of each stack
    int *next;    // Array to store next available index
    int n, s;     // 'n' is number of stacks, 's' is total size of array
    int freeSpot; // Index of first free slot in the array

public:
    // Constructor to initialize N stacks in a single array of size S
    NStack(int numStacks, int size)
    {
        n = numStacks;
        s = size;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // Initialize all stacks as empty (-1 is used to indicate empty stacks)
        for (int i = 0; i < n; i++)
            top[i] = -1;

        // Initialize all spaces as free and link each slot to the next
        freeSpot = 0;
        for (int i = 0; i < s - 1; i++)
            next[i] = i + 1;
        next[s - 1] = -1; // -1 indicates end of free list
    }

    // Pushes 'x' into the specified stack number 'stackNum'
    void push(int x, int stackNum)
    {
        if (freeSpot == -1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        // Get index where we can place the element
        int index = freeSpot;

        // Update freeSpot to next free index
        freeSpot = next[index];

        // Insert the element into the array
        arr[index] = x;

        // Update next to point to the old top of the stack
        next[index] = top[stackNum];

        // Update top to new index
        top[stackNum] = index;
    }

    // Pops element from stack number 'stackNum'
    int pop(int stackNum)
    {
        if (top[stackNum] == -1)
        {
            cout << "Stack Underflow\n";
            return -1;
        }

        // Get index of top element of the stack
        int index = top[stackNum];

        // Update top to the next element in the stack
        top[stackNum] = next[index];

        // Add this index to free spots
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

    // Displays elements of each stack
    void display(int stackNum)
    {
        int index = top[stackNum];
        while (index != -1)
        {
            cout << arr[index] << " ";
            index = next[index];
        }
        cout << endl;
    }
};

int main()
{
    int numStacks = 3, size = 10;
    NStack stacks(numStacks, size);

    // Push elements to different stacks
    stacks.push(10, 0);
    stacks.push(20, 0);
    stacks.push(30, 1);
    stacks.push(40, 2);
    stacks.push(50, 1);

    // Display stacks
    cout << "Stack 0: ";
    stacks.display(0);

    cout << "Stack 1: ";
    stacks.display(1);

    cout << "Stack 2: ";
    stacks.display(2);

    // Pop elements from stack 1
    cout << "Popped from stack 1: " << stacks.pop(1) << endl;
    cout << "Stack 1 after pop: ";
    stacks.display(1);

    return 0;
}
