#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;
    q.push(5);
    q.push(6);
    cout << q.front();
    cout << q.back();
    cout << q.size();

    return 0;
}