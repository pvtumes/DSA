#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int col = 1;
    while (col <= n)
    {
        int space=n-col;
        while(space){
            cout<<" ";
            space--;
        }
        int row=1;
        while(row<=col){
            cout<<"*";
            row++;
        }
        col++;
        cout<<endl;
    }

    return 0;
}