#include <bits/stdc++.h>
#define INF 1001001001
#define PI 3.1415926535897932384626
#define Max 1000000

using namespace std;

vector<int>g[Max];
bool v[Max];

void addEdge(int a, int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    v[u] = true;

    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        cout<<"Front : "<<f<<" ";

        for(auto i = g[f].begin();i!=g[f].end();i++)
        {
            if(!v[*i])
            {
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}

void printElements(vector<int>v[Max],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Elements at index "<< i << ": ";
        for(auto it = v[i].begin(); it!= v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int nodes,edges;
    cout<<"Enter the number of nodes"<<endl;
    cin>>nodes;
    cout<<"Enter the number of edges"<<endl;
    cin>>edges;

    for(int i=1;i<=edges;i++){
        int x,y;
        cin>>x>>y;
        addEdge(x,y);
    }

    for(int i=0;i<nodes;i++)
    {
        if(!v[i])
        {
            bfs(i);
        }
    }

  return 0;
}










