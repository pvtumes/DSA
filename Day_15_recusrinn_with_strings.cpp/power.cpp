#include <iostream>
using namespace std;
int power(int num, int powerr)
{
    if (power == 0)
    {
        return 1;
    }
    if (powerr == 1)
    {
        return num;
    }
    int ans = power(num, num / 2);
    if (powerr % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return num * ans * ans;
    }
}
int main()
{

    int num = 3;
    int powerr = 10;
    cout << power(num, powerr);

    return 0;
}