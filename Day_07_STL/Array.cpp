#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Initialize a std::array of 4 integers
    array<int, 4> a = {1, 2, 3, 4};

    // 1. size() - returns the number of elements in the array (always fixed)
    int size = a.size();
    cout << "Array size: " << size << endl;

    // 2. at(index) - returns the element at the specified index with bounds checking
    cout << "Element at second index is: " << a.at(2) << endl;

    // 3. empty() - checks if the array is empty (always false for std::array)
    cout << "Empty or not: " << a.empty() << endl;

    // 4. front() - returns the first element of the array
    cout << "First Element: " << a.front() << endl;

    // 5. back() - returns the last element of the array
    cout << "Last Element: " << a.back() << endl;

    // Additional functions:

    // 6. data() - returns a pointer to the underlying array
    int *ptr = a.data();
    cout << "Pointer to the first element: " << *ptr << endl;

    // 7. fill(value) - fills the array with a specific value
    a.fill(10); // All elements will now be 10
    cout << "Array after fill with 10: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // 8. swap() - swaps the contents of two arrays
    array<int, 4> b = {5, 6, 7, 8};
    a.swap(b); // Now 'a' has elements of 'b' and vice-versa
    cout << "Array 'a' after swap with array 'b': ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // 9. begin() and end() - provides iterators to iterate over the array
    cout << "Iterating over array 'a': ";
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 10. rbegin() and rend() - provides reverse iterators
    cout << "Reverse iterating over array 'a': ";
    for (auto it = a.rbegin(); it != a.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
