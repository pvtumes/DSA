#include <iostream>
using namespace std;
int main()
{

    // find the ith bit of the given number
    int n;
    int i;
    cin >> n;
    cin >> i;
    // if (n >> i - 1)
    // {
    //     if (n % 2 == 0)
    //     {
    //         cout << "ith bit is 0";
    //     }
    //     else
    //     {
    //         cout << "ith bit is 1";
    //     }
    // }

    if((n& (1<<i-1))!=0){
        cout<<1;
    }
    else{
        cout<<0;
    }



    return 0;
}