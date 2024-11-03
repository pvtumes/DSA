#include<iostream>
using namespace std;
int main(){

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

    return 0;
}