#include <iostream>
using namespace std;
void alternate_array(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
int main()
{
    int size = size;
    cout << "sizeEnter the size of the Array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "eEnter the " << i + 1 << " Element:";
        cin >> arr[i];
    }
    alternate_array(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}