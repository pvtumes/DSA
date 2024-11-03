#include <iostream>
using namespace std;
int find_fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * find_fact(n - 1);
}
int main()
{

    int n;
    cin >> n;
    cout << find_fact(n);

    return 0;
}