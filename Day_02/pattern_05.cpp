#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int col=1;
    while(col<=n){
        int number=n-col+1;
        int row=1;
        while(row<=number){
            cout<<"*";
            row++;
        }
        col++;
        cout<<endl;
        
     
    }



    return 0;
}