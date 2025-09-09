#include <iostream>
using namespace std;
bool Binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return true;
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
        cout << endl
             << "enter " << i + 1 << " elemtn:";
        cin >> arr[i];
    };
    int key;
    cout << "Enter the key to find:";
    cin >> key;
    cout<<Binary_search(arr, size, key);

    return 0;
}