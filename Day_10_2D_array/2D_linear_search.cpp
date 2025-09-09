#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    cout << "Enter the values of the 3x4 array:" << endl;

    // Input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Key input
    int key;
    cout << "\nEnter the key to search: ";
    cin >> key;

    // Search for the key
    bool found = false; // flag to track if key is found
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                cout << "✅ Key found at position: (" << row << ", " << col << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "❌ Key not found in the array." << endl;
    }

    return 0;
}
