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

void reverse(char name[])
{
    int length = get_length(name);
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        swap(name[start++], name[end--]);
    }
}
bool palidrom(char name[])
{
    int length = get_length(name) - 1;
    int start = 0;
    int end = length;
    while (start <= end)
    {
        if (name[start++] != name[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char name[20];
    cout << "Enter Your name:";
    cin >> name;
    reverse(name);
    cout << "Your name is:" << name;
    cout << "The given string is palidrom or not:" << palidrom(name);

    return 0;
}