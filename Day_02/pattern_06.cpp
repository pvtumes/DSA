#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int col=1;
    while(col<=n){
        int space_number=n-col;
        
        while(space_number){
            cout<<" ";
            --space_number;
        }
        int row1=1;
        while(row1<=col){
            cout<<row1;
            row1++;
        }

        int row=1;
        int number=col-1;
        
        while(row<col){
            cout<<number--;
            row++;
            
        }


        cout<<endl;
        col++;
    }

    return 0;
}