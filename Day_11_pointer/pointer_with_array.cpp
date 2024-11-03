#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    char ch[6]="umehs";
    cout << "Address of the first index of array is:" << arr << endl;
    cout << "Address of the first index of the array is:" << &arr[0];

    return 0;
}