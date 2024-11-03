#include <iostream>
using namespace std;

void find_interaction(int arr[], int arrr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int j = 0;
        for (j; j < size; j++)
        {

            if (arr[i] == arrr[j])

            {
                cout << arrr[j];
                j = j + 1;
                break;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size];
    int arrr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element";
        cin >> arrr[i];
    }
    find_interaction(arr, arrr, size);

    return 0;
}