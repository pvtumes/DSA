#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    stack<int> s;    // Stack to store the indices of the histogram bars
    int maxArea = 0; // Variable to store the maximum area
    int n = heights.size();

    for (int i = 0; i < n; i++)
    {
        // Pop from stack while the current bar is shorter than the stack's top bar
        while (!s.empty() && heights[i] < heights[s.top()])
        {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        s.push(i); // Push current bar index to the stack
    }

    // Pop remaining bars in the stack
    while (!s.empty())
    {
        int height = heights[s.top()];
        s.pop();
        int width = s.empty() ? n : n - s.top() - 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}

int main()
{
    int n;
    cout << "Enter the number of bars in the histogram: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter the heights of the bars: ";
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int maxRectangle = largestRectangleArea(heights);
    cout << "The largest rectangle area in the histogram is: " << maxRectangle << endl;

    return 0;
}
