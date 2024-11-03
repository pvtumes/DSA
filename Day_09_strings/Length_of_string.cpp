#include <iostream>
using namespace std;
int get_length(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name:";
    cin >> name;
    cout << get_length(name);

    return 0;
}