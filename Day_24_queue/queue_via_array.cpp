#include <iostream>
using namespace std;
void enque(int data,int *arr){
    if(rear==size)

}
int main()
{
    int size;
    int *arr;
    cout << "Enter the size of the queue:";
    cin >> size;
    arr = new int[size];
    int q = 1;
    while (q == 1)
    {
        cout << "Enter 1 to enque in the queue:" << endl;
        cout << "Enter 2 to deque in the queue:" << endl;
        cout << "Enter 3 to check isempty :" << endl;
        cout << "Enter 4 to check size:" << endl;
        int choice;
        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter your data to insert in the queue:";
            cin >> data;
            enque(data,arr);
            break;
        }
        case 2:
        {
            cout << deque();
            break;
        }
        case 3:
        {
            cout << is_empty();
            break;
        }
        case 4:
        {
            cout << size;
            break;
        }
        case 5:
        {
            q=0;
            break;
        }
        default:
        {
            cout << "Enter valid choice:";
        }
        }
    }

    return 0;
}