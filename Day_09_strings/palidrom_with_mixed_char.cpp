#include <iostream>
#include <cstring> // Not needed since we use string
using namespace std;

// Function to convert uppercase letters to lowercase
void lowercase(string &name)
{ // Pass by reference to modify the original string
    int length = name.size();
    for (int i = 0; i < length; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32; // Convert to lowercase
        }
    }
}

// Function to remove non-lowercase characters from the string
void remove_sc(string &name)
{                    // Pass by reference to modify the original string
    lowercase(name); // Convert to lowercase first
    string result;   // String to store valid characters
    for (char c : name)
    { // Use range-based for loop
        // Check if the current character is a lowercase letter
        if (c >= 'a' && c <= 'z')
        {
            result += c; // Append valid character to the result
        }
    }
    name = result; // Update the original string with the cleaned version
}

// Function to check if the modified string is a palindrome
bool palidrom(string name)
{
    remove_sc(name); // Clean the string first
    int start = 0;
    int end = name.size() - 1; // Adjust to last character
    while (start < end)
    {
        if (name[start++] != name[end--])
        {
            return false; // Not a palindrome
        }
    }
    return true; // It's a palindrome
}

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // Check if the cleaned string is a palindrome and print the result
    if (palidrom(name))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
