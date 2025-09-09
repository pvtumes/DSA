// find the wheter the number is prime or not
#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int i =2;
    // while(i<n){
    //     if(n%i==0){
    //         cout<<"it is not prime number:";
    //         break;
    //     }
    //     else{
    //         cout<<"it is prime number:";
    //         break;
    //     }
    //     i++;
    // }

    while (true)
    {
        int small, large;
        cin >> small >> large;
        int i = small;
        while (i <= large)
        {
            int j = 2;
            bool flag = true;
            while (i > j)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
                j++;
            }
            if (flag)
            {
                cout << i << " ";
            }
            i++;
        }
    }

    return 0;
}