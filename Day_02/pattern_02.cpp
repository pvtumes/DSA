// 8
// 88
// 888
// 8888
//draw the folloeing figer
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int col=1;
    while(col<=n){
        int row=1;
        while(row<=col){
            cout<<" *  ";
            row++;
        }
        cout<<endl;
        col++;
    }


    return 0;
}