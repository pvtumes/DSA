#include <iostream>
using namespace std;
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_value;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int size;
    cout << "enter the size of the array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element";
        cin >> arr[i];
    }
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}