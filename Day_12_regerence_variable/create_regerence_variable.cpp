#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    cout << j++;
    cout << j++;

    return 0;
}