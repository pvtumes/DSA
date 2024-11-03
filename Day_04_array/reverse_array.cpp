#include <iostream>
using namespace std;
void reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the error:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cout << "Enter the " << i + 1 << "th element:";
        cin >> arr[i];
    }
    reverse_array(arr, size);

    for (int i = 0; i < size; i++)
    {

        cout << " " << arr[i];
    }

    return 0;
}