#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int col=1;
    while(col<=n){
        int row=1;
        int inner_number=n;
        while(row<=n){
            cout<<inner_number;
            inner_number--;
            row++;
        }
        cout<<endl;
        col++;
    }


    return 0;

}