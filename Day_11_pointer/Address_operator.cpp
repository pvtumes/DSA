#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of the Num:";
    cin >> num;
    int *ptr = &num;
    cout << "Value before increment is:" << *ptr << endl;
    (*ptr)++;
    cout << "value after increment is:" << *ptr << endl;

    // coping pointer to another pointer
    int *new_ptr = ptr;
    cout << *new_ptr;

    return 0;
}
