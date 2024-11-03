#include <iostream>
using namespace std;
void sort(int arr_01[], int arr_02[], int arr_03[], int size_01, int size_02, int size_03)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size_01 && j < size_02)
    {
        if (arr_01[i] < arr_02[j])
        {
            arr_03[k] = arr_01[i];
            i++;
            k++;
        }
        else
        {
            arr_03[k] = arr_02[j];
            j++;
            k++;
        }
    }
    while (i < size_01)
    {
        arr_03[k] = arr_01[i];
        i++;
        k++;
    }
    while (j < size_02)
    {
        arr_03[k] = arr_02[j];
        j++;
        k++;
    }
}
int main()
{
    int size_01;
    int size_02;
    cout << "Enter the Size of the first array:";
    cin >> size_01;
    cout << "Enter the size of the second array:";
    cin >> size_02;
    int size_03 = size_01 + size_02;
    int arr_01[size_01];
    int arr_02[size_02];
    int arr_03[size_03];
    for (int i = 0; i < size_01; i++)
    {
        cout << "Enter the " << i + 1 << " Element of first array:";
        cin >> arr_01[i];
    }
    cout << endl;

    for (int i = 0; i < size_01; i++)
    {
        cout << arr_01[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size_02; i++)
    {
        cout << "Enter the " << i + 1 << " Element of second array:";
        cin >> arr_02[i];
    }
    cout << endl;

    for (int i = 0; i < size_02; i++)
    {
        cout << arr_02[i] << " ";
    }
    cout << endl;

    sort(arr_01, arr_02, arr_03, size_01, size_02, size_03);

    for (int i = 0; i < size_03; i++)
    {
        cout << arr_03[i] << " ";
    }

    return 0;
}