#include <iostream>
using namespace std;

void print(int *ptr)
{
    cout << *ptr << endl;
}
void update(int *ptr)
{
    cout << ++(*ptr) << endl;
}
int main()
{

    int value = 5;

    int *ptr = &value;
    print(ptr);
    update(ptr);
    print(ptr);

    return 0;
}