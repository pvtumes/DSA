#include <iostream>
using namespace std;
void reverse_ulternate(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start + 2;
        end = end - 2;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Element:";
        cin >> arr[i];
    }
    reverse_ulternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}