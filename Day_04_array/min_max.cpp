#include <iostream>
#include <climits>
using namespace std;
int getmin(int arr[], int size)
{
    int min_value = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }
    return min_value;
}

int getmax(int arr[], int size)
{
    int max_value = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }
    return max_value;
}
int main()
{
    int size;
    cout << "Enter the size of the Array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cout << "Enter the " << i + 1 << "th Element:";
        cin >> arr[i];
    }
    cout << getmin(arr, size) << endl;
    cout << getmax(arr, size) << endl;

    return 0;
}