#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot > arr[i])
        {
            count++;
        }
    }
    // placing pivot element at its place

    int pivot_index = s + count;
    swap(arr[s], arr[pivot_index]);

    // left and right waala part
    int i = s, j = e;
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
void quick_sort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    // left part
    quick_sort(arr, s, p - 1);
    // right part
    quick_sort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int size = 5;

    quick_sort(arr, 0, 4);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}