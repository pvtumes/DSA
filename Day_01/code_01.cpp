//Find wether the entered character is upercase or lower or numeric or special charachter
#include<iostream>
using namespace std;
int main(){
    

   while(1){
    char ch;
    cin>>ch;

     if(ch>='a' && ch<='z'){
        cout<<"it is lower case:";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"it is upper case";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"it is numeric";
    }
    else{
        cout<<"it is speacial character:";
    }
   }



    return 0;
}