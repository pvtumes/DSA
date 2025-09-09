#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, int direction)
    {
        adjList[u].push_back(v);
        if (direction == 0) // undirected
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << " -> ";
            for (auto value : i.second)
            {
                cout << value << " ";
            }
            cout << endl;
        }
    }

    // BFS traversal
    void bfs()
    {
        vector<int> ans;
        unordered_map<int, bool> visited;
        queue<int> q;

        // initialize visited
        for (auto i : adjList)
        {
            visited[i.first] = false;
        }

        int startNode = adjList.begin()->first; // pick first node
        q.push(startNode);
        visited[startNode] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            ans.push_back(frontNode);
            q.pop();

            for (auto i : adjList[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }

        cout << "BFS traversal is: ";
        for (auto i : ans)
        {
            cout << i << " -> ";
        }
        cout << "NULL" << endl;
    }

    // Recursive DFS helper
    void dfsHelper(int node, unordered_map<int, bool> &visited, vector<int> &ans)
    {
        visited[node] = true;
        ans.push_back(node);

        for (auto i : adjList[node])
        {
            if (!visited[i])
            {
                dfsHelper(i, visited, ans);
            }
        }
    }

    // DFS traversal
    void dfs()
    {
        unordered_map<int, bool> visited;
        vector<int> ans;

        for (auto i : adjList)
        {
            visited[i.first] = false;
        }

        int startNode = adjList.begin()->first;
        dfsHelper(startNode, visited, ans);

        cout << "DFS traversal is: ";
        for (auto i : ans)
        {
            cout << i << " -> ";
        }
        cout << "NULL" << endl;
    }


    bool cycleDetection(){

        unordered_map<int,int> patent;
        unordered_map<int, bool> visited;
        queue<int> q;

        // initialize visited
        for (auto i : adjList)
        {
            visited[i.first] = false;
        }

        int startNode = adjList.begin()->first; // pick first node
        q.push(startNode);
        patent[startNode]=-1;
        visited[startNode] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto i : adjList[frontNode])
            {
                if(visited[i] && patent[frontNode]!=i){
                    return true;
                }
                else if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                    patent[i]=frontNode;
                }
            }
        }

        return false;
    }
};

int main()
{
    Graph g;
    int vertices, edges;
    cout << "Enter the Number of Vertices and Number of Edges: ";
    cin >> vertices >> edges;

    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cout << "Enter " << i + 1 << " Edge: ";
        cin >> a >> b;
        g.addEdge(a, b, 0); // undirected
    }

    cout << "\nAdjacency List:\n";
    g.printAdjList();
    cout << endl;

    g.bfs();
    g.dfs();
    cout<<endl<<g.cycleDetection();

    return 0;
}
