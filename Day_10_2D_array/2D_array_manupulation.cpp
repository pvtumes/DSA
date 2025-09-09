#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout << "enter the all the values of  3x3 matrix:";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[col][row];
        }
    }

    cout << "all the values of the matrix are:" << endl;
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }
    return 0;
}