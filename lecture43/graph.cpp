#include <iostream>
#include <vector>
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

int n = 7;
vector<vector<Edge *>> graph(n, vector<Edge *>());

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (Edge *e : graph[i])
        {
            cout << "(" << e->v << ", " << e->w << ") ";
        }
        cout << endl;
    }
}

void addEdge(int u, int v, int w)
{
    if (u < 0 || v < 0 || u >= n || v >= n)
        return;

    graph[u].push_back(new Edge(v, w));
    graph[v].push_back(new Edge(u, w));
}

void constructGraph()
{
    addEdge(0, 1, 10);
    addEdge(0, 3, 10);
    addEdge(1, 2, 10);
    addEdge(2, 3, 40);
    addEdge(3, 4, 2);
    addEdge(4, 5, 2);
    addEdge(4, 6, 3);
    addEdge(5, 6, 8);

    display();
    cout << endl;
}

void removeEdge(int u, int v)
{
    int i = 0;
    while (i < graph[u].size())
    {
        Edge *e =graph[u][i];
        if (e->v == v)
        {
            break;
        }
        i++;
    }

    int j = 0;
    while (j < graph[v].size())
    {
        Edge *e = graph[v][j];
        if (e->v == u)
        {
            break;
        }
        j++;
    }

    graph[u].erase(graph[u].begin() + i);
    graph[v].erase(graph[v].begin() + j);
}

void removeVtx(int u)
{
    while (graph[u].size() != 0)
    {
        Edge *e = graph[u][graph[u].size() - 1];
        removeEdge(u, e->v);
    }
}
void haspath(int src,int dest,vector<bool>&vis,string psf){
    cout<<psf<<endl;
    vis[src]=true;
    for(Edge* e:graph[src]){
        if(vis[e->v]){
            haspath(e->v,dest,vis,psf+to_string(e->v));
        }
    }
}
int allpath(int src,int dest,vector<bool>& vis,int wsf,string psf){
    if(src==dest){
        cout<<psf+" @ "+to_string(wsf)<<endl;
        return 1;
    }
    int count=0;
    vis[src]=true;
    for(Edge*e:graph[src]){
        if(!vis[e->v]){
            count+=allpath(e->v,dest,vis,wsf+(e->w),psf+to_string(e->v));
        }
    }
    vis[src]=false;
    return count;
}
int swsf=1e8;
string spsf="";

int lwsf=-1;
string lpsf="";

void allsolutions(int src,int dest,vector<bool>&vis,int wsf,string psf){
    if(src==dest)
    {
        if(wsf<swsf)
        {
            swsf=wsf;
            spsf=psf;
        }
        if(wsf>lwsf)
        {
            lwsf=wsf;
            lpsf=psf;
        }
    }
    vis[src]=true;
    for(Edge*e:graph[src])
    {
        if(!vis[e->v])
        allsolutions(e->v,dest,vis,wsf+e->w,psf+to_string(src)+"->");
    }
    vis[src]=false;
}
void dfs(int src,vector<bool>&vis)
{
    vis[src]=true;
    for(Edge*e:graph[src]){
        if(!vis[e->v])
        dfs(e->v,vis);
    }
}
void getconnectedcomponents()
{
    vector<bool>vis(n,false);
    int compo=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            compo++;
            dfs(i,vis);
        }
    }
    cout<<compo<<endl;
}

void solve()
{
    constructGraph();
    //    removeEdge(3,4);
    vector<bool> vis(n, false);
    cout<<haspath(0,6,vis,to_string(0) + "")<<endl;
    //cout << allpath(0, 6, vis, 0, to_string(0) + "") << endl;
    allsolutions(0,6,vis,0,"");
    cout<<spsf<<" @ "<<swsf<<endl;
    cout<<lpsf<<" @ "<<lwsf<<endl;
    cout<<getconnectedcomponents<<endl;
}

int main()
{
    solve();
    return 0;
}
