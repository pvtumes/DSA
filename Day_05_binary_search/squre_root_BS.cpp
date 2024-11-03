#include <iostream>
using namespace std;
int square_root(int number)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (mid * mid == number)
        {
            return mid;
        }
        else if (mid * mid > number)
        {
            end = mid;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int number;
    cout << "Enter the NUMBER:";
    cin >> number;
    cout << square_root(number);

    return 0;
}