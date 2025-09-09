#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        adjList[u].push_back(v);
        if (direction == 0)
        { // undirected
            adjList[v].push_back(u);
        }
    }

    void printadjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void bfs()
    {
        unordered_map<int, bool> visited;
        for (auto i : adjList)
            visited[i.first] = false;

        queue<int> q;
        vector<int> ans;

        int startNode = adjList.begin()->first;
        q.push(startNode);
        visited[startNode] = true;

        while (!q.empty())
        {
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for (auto i : adjList[node])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }

        cout << endl;
        for (int i : ans)
            cout << i << "->";
    }

    void dfs()
    {
        unordered_map<int, bool> visited;
        for (auto i : adjList)
            visited[i.first] = false;

        stack<int> stk;
        vector<int> ans;

        int startNode = adjList.begin()->first;
        visited[startNode] = true;
        stk.push(startNode);

        while (!stk.empty())
        {
            int node = stk.top();
            ans.push_back(node);
            stk.pop();
            for (auto i : adjList[node])
            {
                if (!visited[i])
                {
                    stk.push(i);
                    visited[i] = true;
                }
            }
        }

        cout << endl;
        for (int i : ans)
            cout << i << "->";
    }

    // undirected cycle detection (BFS)
    bool cycle_detecion()
    {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        for (auto i : adjList)
            visited[i.first] = false;

        queue<int> q;
        int startNode = adjList.begin()->first;
        q.push(startNode);
        visited[startNode] = true;
        parent[startNode] = -1;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto i : adjList[node])
            {
                if (visited[i] && parent[node] != i)
                    return true;
                else if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                    parent[i] = node;
                }
            }
        }
        return false;
    }

    // undirected cycle detection (DFS iterative)
    bool cycle_detection_dfs()
    {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        for (auto i : adjList)
            visited[i.first] = false;

        stack<int> stk;
        int startNode = adjList.begin()->first;
        visited[startNode] = true;
        stk.push(startNode);
        parent[startNode] = -1;

        while (!stk.empty())
        {
            int node = stk.top();
            stk.pop();
            for (auto i : adjList[node])
            {
                if (visited[i] && parent[node] != i)
                    return true;
                else if (!visited[i])
                {
                    stk.push(i);
                    visited[i] = true;
                    parent[i] = node;
                }
            }
        }
        return false;
    }

    // directed cycle detection helper (recursive DFS)
    bool directedCycleDetectionHelper(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited)
    {
        visited[node] = true;
        dfsVisited[node] = true;

        for (int nbr : adjList[node])
        {
            if (!visited[nbr])
            {
                if (directedCycleDetectionHelper(nbr, visited, dfsVisited))
                    return true;
            }
            else if (dfsVisited[nbr])
            {
                // back edge found
                return true;
            }
        }

        dfsVisited[node] = false; // backtrack
        return false;
    }

    // directed cycle detection
    bool directedCycleDetection()
    {
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;
        for (auto i : adjList)
        {
            visited[i.first] = false;
            dfsVisited[i.first] = false;
        }

        // check all components
        for (auto i : adjList)
        {
            int node = i.first;
            if (!visited[node])
            {
                if (directedCycleDetectionHelper(node, visited, dfsVisited))
                    return true;
            }
        }
        return false;
    }

    void topo(int node, unordered_map<int, bool> &visited, stack<int> &stk1){
        visited[node]=true;
        for(int i:adjList[node]){
            if(!visited[i]){
                topo(i,visited,stk1);
            }
        }

        stk1.push(node);
    }

        void topological_sort()
    {
        unordered_map<int, bool> visited;
        stack<int>stk1;
        for (auto i : adjList)
        {
            visited[i.first] = false;
           
        }

        for(auto i:adjList){
            if(!visited[i.first]){
                int startNode = i.first;
                topo(startNode, visited, stk1);
            }
           
        }
        cout << endl;
        while(!stk1.empty()){
            
            cout<<stk1.top()<<" ";
            stk1.pop();

        }
    }
};

int main()
{
    Graph g;
    cout << "enter the number of nodes and edges:";
    int u, v;
    cin >> u >> v;
    for (int i = 0; i < v; i++)
    {
        cout << "enter " << i + 1 << " edge (u v): ";
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b, 1); // directed graph
    }

    g.printadjList();
    g.bfs();
    g.dfs();
    cout << endl
         << "Undirected BFS cycle detection: " << g.cycle_detecion();
    cout << endl
         << "Undirected DFS cycle detection: " << g.cycle_detection_dfs();
    cout << endl
         << "Directed cycle detection: " << g.directedCycleDetection();
}
