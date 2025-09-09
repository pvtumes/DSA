#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // int col=1;
    // while(col<=n){

    //     int row=1;
    //     while(row<=n){
    //         cout<<" * ";
    //         row++;
    //     }
    //     cout<<endl;
    //     col++;
    // }

    //  int col=1;
    //  int number=1;
    // while(col<=n){

    //     int row=1;
    //     while(row<=n){
    //         cout<<number;
    //         number++;
    //         row++;
    //     }
    //     cout<<endl;
    //     col++;
    // }

    int col = 1;
   
    while (col <= n)
    {

        int row = 1;
        while (row <= n)
        {
            cout << col;
            
            row++;
        }
        cout << endl;
        col++;
    }

    return 0;
}