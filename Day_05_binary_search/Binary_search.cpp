#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int size;
    cout << "enter the size of the array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " enter the " << i + 1 << " element:";
        cin >> arr[i];
    }
    cout << "enter the key to search:";
    int key;
    cin >> key;
    cout << key << " is found at index " << binary_search(arr, size, key);

    return 0;
}