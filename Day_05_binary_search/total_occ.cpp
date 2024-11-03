#include <iostream>
using namespace std;
int first_occ(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int fc;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            fc = mid;
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
    return fc;
}

int last_occ(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int lc;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            lc = mid;
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
    return lc;
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
    cout << "Enter the key:";
    cin >> key;
    cout << "Total number of occurance is:" << last_occ(arr, size, key) - first_occ(arr, size, key) + 1;

    return 0;
}