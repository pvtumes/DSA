#include <iostream>
using namespace std;
// void return_sum(int arr[][4], int size_01, int size_02)
// {

//     for (int i = 0; i < size_01; i++)

//     {
//         int sum = 0;
//         for (int j = 0; j < size_02; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << "Sum of the " << i + 1 << " row is:" << sum;
//     }
// }
int main()
{
    int size_01;
    int size_02;
    cout << "Enter the size of the First Array and Then second Array:";
    cin >> size_01;
    cin >> size_02;
    int arr[size_01][size_02];

    for (int i = 0; i < size_01; i++)
    {
        for (int j = 0; j < size_02; j++)
        {
            cout << "Enter the " << i << "x" << j << "Element:";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size_01; i++)

    {
        int sum = 0;
        for (int j = 0; j < size_02; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of the " << i + 1 << " row is:" << sum << endl;
    }

    return 0;
}