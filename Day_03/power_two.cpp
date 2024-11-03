#include<iostream>
#include<math.h>
using namespace std;
int power(int n){
     for(int i=0;i<31;i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }

        return false;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<power(n);
   

    return 0;
}