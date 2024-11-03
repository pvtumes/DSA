#include <iostream>
using namespace std;

int peak_element(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // Check if the mid element is less than the next element
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1; // move to the right half
        }
        else
        {
            end = mid; // move to the left half, because arr[mid] might be the peak
        }
    }

    // The loop breaks when start == end, which is the peak element
    return start;
}

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> arr[i];
    }

    int peak_index = peak_element(arr, size);
    cout << "The peak element is at index: " << peak_index << endl;

    return 0;
}
