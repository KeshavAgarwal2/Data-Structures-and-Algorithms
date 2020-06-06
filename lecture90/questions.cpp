#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Edge
{
public:
    int v = 0;
    int w = 0;

    Edge(int v, int w)
    {
        this->v = v;
        this->w = w;
    }
};

int N = 7;
vector<vector<Edge>> graph(N, vector<Edge>());
// vector<vector<pair<int,int>>> graph(N,vector<pair<int,int>>());

void addEdge(vector<vector<Edge>> &gp, int u, int v, int w)
{
    gp[u].push_back(Edge(v, w));
    gp[v].push_back(Edge(u, w));
}

int findEdge(int v1, int v2)
{
    int vtx = -1;
    for (int i = 0; i < graph[v1].size(); i++)
    {
        Edge e = graph[v1][i];
        if (e.v == v2)
        {
            vtx = i;
            break;
        }
    }

    return vtx;
}

void removeEdge(int u, int v)
{

    int idx1 = findEdge(u, v);
    int idx2 = findEdge(v, u);

    graph[u].erase(graph[u].begin() + idx1);
    graph[v].erase(graph[v].begin() + idx2);
}

void removeVtx(int vtx)
{

    while (graph[vtx].size() != 0)
    {
        //int vtx2=graph[vtx][graph[vtx].size()-1];

        Edge e = graph[vtx].back();
        removeEdge(vtx, e.v);
    }
}

void display(vector<vector<Edge>> &gp)
{

    for (int i = 0; i < gp.size(); i++)
    {
        cout << i << " -> ";

        // for(int j=0;j<gp[i].size();j++){
        //     Edge* e=gp[i][j];
        // }

        for (Edge e : gp[i])
        {
            cout << "(" << e.v << ", " << e.w << "), ";
        }
        cout << endl;
    }

    cout << endl;
}

//Question.======================================================

bool hasPath(int src, int dest, vector<bool> &vis)
{
    if (src == dest)
        return true;

    vis[src] = true;
    bool res = false;
    for (Edge e : graph[src])
    {
        if (!vis[e.v])
            res = res || hasPath(e.v, dest, vis);
    }

    return res;
}

int allPath(int src, int dest, vector<bool> &vis, int w, string ans)
{
    if (src == dest)
    {
        cout << ans << dest << " @ " << w << endl;
        return 1;
    }

    vis[src] = true;

    int count = 0;
    for (Edge e : graph[src])
    {
        if (!vis[e.v])
            count += allPath(e.v, dest, vis, w + e.w, ans + to_string(src) + " ");
    }

    vis[src] = false;
    return count;
}

class allSolutionPair
{
public:
    int lightW = 1e7;
    int heavyW = 0;
    int ceil = 1e7;
    int floor = 0;
};

void allSolution(int src, int dest, vector<bool> &vis, int w, string ans, allSolutionPair &pair, int data)
{
    if (src == dest)
    {
        pair.heavyW = max(pair.heavyW, w);
        pair.lightW = min(pair.lightW, w);

        if (w > data)
            pair.ceil = min(pair.ceil, w);
        if (w < data)
            pair.floor = max(pair.floor, w);
        return;
    }

    vis[src] = true;

    for (Edge e : graph[src])
    {
        if (!vis[e.v])
            allSolution(e.v, dest, vis, w + e.w, ans + to_string(src) + " ", pair, data);
    }

    vis[src] = false;
}

void preOrder(int src, vector<bool> &vis, int w, string ans)
{
    vis[src] = true;
    cout << ans << " @ " << w << endl;
    for (Edge e : graph[src])
        if (!vis[e.v])
            preOrder(e.v, vis, w + e.w, ans + to_string(e.v) + " ");

    vis[src] = false;
}

void hamintonianPath(int src, int osrc, vector<bool> &vis, int count, string ans)
{

    if (count == vis.size() - 1)
    {
        int idx = findEdge(src, osrc);
        if (idx != -1)
            cout << "Cycle: " + ans + to_string(src) << endl;
        else
            cout << "Path: " + ans + to_string(src) << endl;
        return;
    }

    vis[src] = true;
    for (Edge e : graph[src])
    {
        if (!vis[e.v])
        {
            hamintonianPath(e.v, osrc, vis, count + 1, ans + to_string(src) + " ");
        }
    }

    vis[src] = false;
}

int GCC_dfs(int src, vector<bool> &vis)
{
    vis[src] = true;
    int count = 0;

    for (Edge e : graph[src])
        if (!vis[e.v])
            count += GCC_dfs(e.v, vis);

    return count + 1;
}

int GCC()
{ //getConnectedComponents
    vector<bool> vis(N, false);
    int count = 0;
    int maxSize = 0;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            count++;
            maxSize = max(maxSize, GCC_dfs(i, vis));
        }
    }
    cout << maxSize << endl;
    return count;
}

void BFS(int src, vector<bool> &vis)
{

    queue<pair<int, string>> que;
    que.push({src, to_string(src) + ""});

    int desti = 6;

    while (que.size() != 0)
    {
        pair<int, string> vtx = que.front();
        que.pop();

        if (vis[vtx.first])
        { //cycle.
            cout << "Cycle: " << vtx.second << endl;
            continue;
        }

        if (vtx.first == desti)
        {
            cout << "destination: " << vtx.second << endl;
        }

        vis[vtx.first] = true;
        for (Edge e : graph[vtx.first])
        {
            if (!vis[e.v])
                que.push({e.v, vtx.second + to_string(e.v)});
        }
    }
}

void BFS_2(int src, vector<bool> &vis)
{
    queue<int> que;
    que.push(src);

    int level = 0;
    int desti = 6;
    int cycle = 0;

    while (que.size() != 0)
    {
        int size = que.size();

        while (size-- > 0)
        {
            int rvtx = que.front();
            que.pop();

            if (vis[rvtx]) //cycle.
            {
                cout << "Cycle No. " + to_string(cycle) + ": " << rvtx << endl;
                cycle++;
                continue;
            }

            if (rvtx == desti)
            {
                cout << "destination: " << level << endl;
            }

            vis[rvtx] = true;
            for (Edge e : graph[rvtx])
            {
                if (!vis[e.v])
                {
                    que.push(e.v);
                }
            }
        }
        level++;
    }
}

void BFS_3(int src, vector<bool> &vis)
{
    queue<int> que;
    que.push(src);
    vis[src] = true;

    int level = 0;
    int desti = 6;

    while (que.size() != 0)
    {
        int size = que.size();

        while (size-- > 0)
        {
            int rvtx = que.front();
            que.pop();

            if (rvtx == desti)
                cout << "destination: " << level << endl;

            for (Edge e : graph[rvtx])
            {
                if (!vis[e.v])
                {
                    que.push(e.v);
                    vis[e.v] = true;
                }
            }
        }
        level++;
    }
}

bool isBipartiteBFS(int src, vector<int> &vis)
{
    queue<pair<int, int>> que; //first is src and second is color.
    que.push({src, 0});        // src is red.
    int cycle = 0;

    while (que.size() != 0)
    {
        int size = que.size();
        while (size-- > 0)
        {
            pair<int, int> rvtx = que.front();
            que.pop();

            if (vis[rvtx.first] != -1) // already visited(cycle).
            {
                cycle++;
                if (vis[rvtx.first] != rvtx.second) // check for conflict.
                    return false;
            }

            vis[rvtx.first] = rvtx.second;
            for (Edge e : graph[rvtx.first])
            {
                if (vis[e.v] == -1)
                    que.push({e.v, (rvtx.second + 1) % 2});
            }
        }
    }

    return true;
}

void isBipartite()
{
    vector<int> vis(N, -1); // -1 : unvisited, 0 : red, 1 : green
    for (int i = 0; i < N; i++)
    {
        if (vis[i] == -1)
            cout << (boolalpha) << isBipartiteBFS(i, vis) << endl;
    }
}

vector<int> par;
vector<int> setSize;

int findPar(int vtx)
{
    if (par[vtx] == vtx)
        return vtx;
    return par[vtx] = findPar(par[vtx]);
}

void mergeSet(int p1, int p2)
{
    if (setSize[p1] < setSize[p2])
    {
        par[p1] = p2;
        setSize[p2] += setSize[p1];
    }
    else
    {
        par[p2] = p1;
        setSize[p1] += setSize[p2];
    }
}

void kruskalAlgo(vector<vector<int>> &arr)
{
    vector<vector<Edge>> KruskalGraph(arr.size(), vector<Edge>());
    sort(arr.begin(),arr.end(),[](vector<int>& a,vector<int>& b){
        return a[2] < b[2] ; // this - other,default is Increasing, '-' replace with '<'
    });
    
    for (vector<int> &ar : arr)
    {
        int u = ar[0];
        int v = ar[1];
        int p1 = findPar(u);
        int p2 = findPar(v);
        if (p1 != p2)
        {
            mergeSet(p1, p2);
            addEdge(KruskalGraph, u, v, ar[2]);
        }
    }

    display(KruskalGraph);
}

//Basic.========================================================

void constructGraph()
{
    // for(int i=0;i<N;i++){
    //     vector<Edge*> a;
    //     graph.push_back(a);
    // }
    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 3, 10);
    addEdge(graph, 1, 2, 10);
    addEdge(graph, 2, 3, 40);
    // addEdge(graph, 3, 4, 2);
    addEdge(graph, 4, 5, 2);
    addEdge(graph, 4, 6, 3);
    addEdge(graph, 5, 6, 8);

    // addEdge(graph, 2, 5, 2);

    display(graph);
    cout << endl;
}

void set1()
{
    // removeEdge(3, 4);
    // removeVtx(3);

    vector<bool> vis(N, false);
    // cout << hasPath(0, 6, vis)<<endl;
    // cout << allPath(0, 6, vis, 0, "") << endl;
    // preOrder(2, vis, 0, to_string(0) + " ");

    // allSolutionPair pair;
    // allSolution(0, 6, vis, 0, "", pair, 30);
    // cout << pair.heavyW << " -> " << pair.lightW << " -> " << pair.ceil << " -> " << pair.floor << " -> " << endl;

    // hamintonianPath(2, 2, vis, 0, "");
    // cout << GCC() << endl;

    // BFS(0, vis);
    // BFS_2(0,vis);
    // BFS_3(0, vis);

    isBipartite();
    // display(graph);
}
//leetcode 1168
int minCostToSupplyWater(int n,vector<int> & wells,vector<vector<int>> &pipes)
{
    for(int i=0;i<wells.size();i++)
    {   pipes.push_back({0,(i+1),wells[i]});
        par.push_back(i);
    sort(pipes.begin(),pipes.end(),[](vector<int>& a,vector<int> &b){
        return a[2]<b[2];
    });
    int cost=0;
    for(vector<int>&p: pipes){
        if(findPar(p[0])!=findPar(p[0]))
        {
            cost+=p[2];
            par[findPar(p[0])]=findPar(p2[1]);
        }
    }
}

void solve()
{
    constructGraph();
    set1();
}

int main()
{
    solve();
    return 0;
}
