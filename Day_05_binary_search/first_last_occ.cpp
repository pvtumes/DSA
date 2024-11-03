#include <iostream>
using namespace std;
int first_occ(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int firstOcc;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            firstOcc = mid;
            end = mid - 1;
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
    return firstOcc;
}

int last_occ(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int lastOcc;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            lastOcc = mid;
            start = mid + 1;
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
    return lastOcc;
}
int main()
{
    int size;
    cout << "Enter the size of the Array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the" << i + 1 << " Element:";
        cin >> arr[i];
    }
    int key;
    cout << "Enter The key to search:";
    cin >> key;
    cout << "first occurance find at place:" << first_occ(arr, size, key) << " end seccond occurance found at index " << last_occ(arr, size, key);

    return 0;
}