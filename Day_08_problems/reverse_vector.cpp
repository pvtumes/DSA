#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int end = v.size() - 1;
    while (s <= end)
    {
        swap(v[s], v[end]);
        s++;
        end--;
    }

    return v;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int> ans = reverse(v);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}