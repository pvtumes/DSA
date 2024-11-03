#include <iostream>
using namespace std;
bool selection(int arr[], int size, int key)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return true;
    }

    return selection(arr + 1, size - 1, key);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << selection(arr, 5, 0);

    return 0;
}