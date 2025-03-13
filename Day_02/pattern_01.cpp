#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // Taking input from user

    int col = 1; // Column counter
    while (col <= n)
    { // Outer loop for rows
        int row = 1;
        int inner_number = n; // Start number in each row

        while (row <= n)
        { // Inner loop for printing numbers in a row
            cout << inner_number;
            inner_number--; // Decrement the number
            row++;
        }

        cout << endl; // Move to the next line
        col++;
    }

    return 0;
}
