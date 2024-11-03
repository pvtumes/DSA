#include <iostream>
using namespace std;
int palidrome(string s, int start, int end)
{
    start++, end--;
    if (start >= end)
    {
        return 1;
    }
    if (s[start] != s[end])
    {
        return 0;
    }
    else
    {
        palidrome(s, start, end);
    }
}
int main()
{
    string s = "ABA";

    cout << palidrome(s, 0, s.length() - 1);
    return 0;
}