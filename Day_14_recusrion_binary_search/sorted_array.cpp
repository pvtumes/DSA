#include <iostream>
using namespace std;
int sorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return 1;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return sorted(arr + 1, size - 1);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << sorted(arr, 5);

    return 0;
}