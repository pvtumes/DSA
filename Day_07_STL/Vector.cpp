#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare an empty vector of integers
    vector<int> v;

    // Check initial capacity
    cout << "Initial capacity: " << v.capacity() << endl;

    // Adding elements using push_back
    v.push_back(1);
    cout << "Capacity after 1st push_back: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity after 2nd push_back: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity after 3rd push_back: " << v.capacity() << endl;

    // Access size and capacity
    cout << "Current size: " << v.size() << endl;
    cout << "Current capacity: " << v.capacity() << endl;

    // Accessing elements using operator[] and at()
    cout << "Element at index 0 using operator[]: " << v[0] << endl;
    cout << "Element at index 1 using at(): " << v.at(1) << endl;

    // Access first and last elements using front() and back()
    cout << "First element (front()): " << v.front() << endl;
    cout << "Last element (back()): " << v.back() << endl;

    // Insert element at a specific position
    v.insert(v.begin() + 1, 10);
    cout << "Element inserted at position 1: " << v[1] << endl;

    // Erase an element from the vector
    v.erase(v.begin() + 2); // Erases element at index 2
    cout << "Element at index 2 after erase: " << v[2] << endl;

    // Resize the vector
    v.resize(5, 100); // Resize to 5 elements, filling with 100
    cout << "After resize, vector elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Check if vector is empty
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // Use clear() to remove all elements
    v.clear();
    cout << "Vector size after clear(): " << v.size() << endl;
    cout << "Is vector empty after clear()? " << (v.empty() ? "Yes" : "No") << endl;

    // Shrink capacity to fit the size
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit(): " << v.capacity() << endl;

    // Add elements again for swapping
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    vector<int> v2 = {10, 20, 30};
    v.swap(v2); // Swap the content of two vectors

    // Display elements after swapping
    cout << "v after swap: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "v2 after swap: ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
