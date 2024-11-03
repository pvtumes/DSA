#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create two temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy data into temporary arrays
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s; // Reset k to start of the merge range
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    // Copy remaining elements of first[]
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    // Copy remaining elements of second[]
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int s, int e)
{
    // Base case: If the array has one or zero elements, it is already sorted
    if (s >= e)
    {
        return;
    }

    // Find the middle point
    int mid = s + (e - s) / 2;

    // Recursively sort first and second halves
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);

    // Merge the two sorted halves
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    // Call merge sort
    merge_sort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
