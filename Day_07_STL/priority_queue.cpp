#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max
    priority_queue<int> p;
    // min
    priority_queue<int, vector<int>, greater<int>> mini;
    p.push(1);
    p.push(2);
    p.push(100);
    p.push(0);
    p.push(0);

    for (int i = 0; i < p.size(); i++)
    {
        cout << p.top() << endl;
        p.pop();
    }

    return 0;
}