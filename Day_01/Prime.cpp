// find the wheter the number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"it is not prime number:";
            break;
        }
        else{
            cout<<"it is prime number:";
            break;
        }
        i++;
    }


    return 0;
}