// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int col=1;
    while(col<=n){
        int inner_number=col;

        int row=1;
        while(row<=col){
            
            cout<<inner_number++;
            row++;
        }
        cout<<endl;
        col++;
    }
    return 0;
}