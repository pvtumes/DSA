#include <iostream>
using namespace std;
int binary_search(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid; // Return the index, not the key
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
    return -1; // If the key is not found
}
int get_pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int search(int arr[], int size, int key)
{
    int pivot = get_pivot(arr, size);
    if (arr[0] <= key && key <= arr[pivot - 1])
    {
        int start = 0;
        int end = pivot - 1;
        return binary_search(arr, start, end, key);
    }
    else
    {
        int start = pivot;
        int end = size - 1;
        return binary_search(arr, start, end, key);
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
        cout << "Enter the " << i + 1 << " element:";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search:";
    cin >> key;
    cout << " your element is at index:" << search(arr, size, key);
}