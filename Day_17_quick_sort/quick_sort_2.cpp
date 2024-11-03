#include <iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivot_index = start + count;
    swap(arr[start], arr[pivot_index]);

    int i = start,
        j = end;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
}
void quick_sort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quick_sort(arr, start, p - 1);
    quick_sort(arr, p + 1, end);
}
int main()
{
    int arr[10] = {1, 5, 9, 4, 8, 7, 2, 6, 3, 0};
    int size = 10;
    quick_sort(arr, 0, 9);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}