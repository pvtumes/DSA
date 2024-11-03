#include <iostream>
using namespace std;
int power_of(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return number * power_of(number, power - 1);
}
int main()
{

    int number;
    int power;
    cout << "Enter the number then power:";
    cin >> number >> power;

    cout << power_of(number, power);

    return 0;
}