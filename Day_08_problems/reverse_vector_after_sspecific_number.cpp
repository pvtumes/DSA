#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v, int index)
{
    int start = index + 1;
    int end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start++], v[end--]);
    }
    return v;
}
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    int index = 2;
    vector<int> ans = reverse(v, index);

    for (int i : ans)
    {
        cout << i;
    }

    return 0;
}