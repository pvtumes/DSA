#include <iostream>
using namespace std;

void reverse(string &s, int start, int end)
{
    if (start >= end) // Corrected base condition
    {
        return;
    }
    swap(s[start], s[end]);
    reverse(s, start + 1, end - 1); // Pass incremented and decremented values
}

int main()
{
    string s = "umesh";
    reverse(s, 0, s.length() - 1); // Adjusted to work with valid indices
    cout << s << endl;             // Print the reversed string

    return 0;
}
