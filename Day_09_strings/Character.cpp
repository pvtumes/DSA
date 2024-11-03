#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter your name:";
    cin >> name;
    name[3] = '\0';
    cout << "Your name is: " << name;

    return 0;
}