#include <iostream>
using namespace std;
int summ(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    };

    if (size == 1)
    {
        return arr[0];
    };

    int sum = arr[0] + summ(arr + 1, size - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << summ(arr, 5);

    return 0;
}