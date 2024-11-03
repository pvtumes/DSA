#include <iostream>
using namespace std;
void find_pair_sum(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << arr[i] << "+" << arr[j] << "=" << key;
            }
        }
    }
}
int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cout << "Enter the " << i + 1 << " element:";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search:";
    cin >> key;
    find_pair_sum(arr, size, key);

    return 0;
}