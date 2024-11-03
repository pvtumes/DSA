#include <iostream>
#include <utility>
using namespace std;
void insertion_sort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[temp] < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    insertion_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}