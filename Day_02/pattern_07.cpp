#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int col=1;
    while(col<=n){
        //print numbers 
        int row_1 =1;
        int number=n-col+1;
        while(row_1<=number){
            cout<<row_1++;
            
        }
        //print stars
        int row_2=1;
        while(row_2<col){
            cout<<"*";
            row_2++;
        }
        //print stars
          int row_3=1;
        while(row_3<col){
            cout<<"*";
            row_3++;
        }
        //print numbers
        int row_4=1;
        int number_1=n-col+1;
        while(number){{
            cout<<number--;
            

        }
            
        }

        col++;
        cout<<endl;
    }
    return 0;
}
