#include <iostream>
#include <climits>
using namespace std;
int return_index(int arr[][3], int row, int col)
{
    int max = INT_MIN;
    int max_index = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            max_index = i;
        }
    }
    return max_index;
}
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

    cout << return_index(arr, 3, 3);

    return 0;
}