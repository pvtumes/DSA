#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout << "Enter the size of the first Array and then second array:";
    cin >> row;
    cin >> col;
    int arr[3][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the " << i << "x" << j << " element:";
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < row; k++)

    {
        if (k % 2 == 0)
        {
            for (int l = 0; l < col; l++)
            {
                cout << " " << arr[l][k];
            }
        }
        else
        {
            for (int l = 2; l >= 0; l--)
            {

                cout << " " << arr[l][k];
            }
        }
    }

    return 0;
}