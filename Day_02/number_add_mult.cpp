#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number:";
    cin >> n;
    int sum = 0;
    int mult = 1;

    while (n)
    {
        int remainder = n % 10;

        sum = remainder + sum;
        mult = remainder * mult;
        n = n / 10;
    }
    cout << sum << endl;
    cout << mult << endl;
    cout << mult - sum << endl;

    return 0;
}