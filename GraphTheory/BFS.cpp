#include <bits/stdc++.h>
#define INF 1001001001
#define PI 3.1415926535897932384626
#define Max 1000000

using namespace std;

vector<int>g[Max];
map<int,int>v;

void addEdge(int a, int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    v[u] = 0;

    while(!q.empty())
    {
        int f = q.front();
        q.pop();

        for(auto i=0;i<g[f].size();i++)
        {
            int x = g[f][i];
            if(!v.count(x))
            {
                q.push(x);
                v[x] += v[f] + 1;
            }
        }
    }
}


int main()
{
    int nodes,edges;
//    cout<<"Enter the number of nodes"<<endl;
//    cin>>nodes;
    cout<<"Enter the number of edges"<<endl;
    cin>>edges;

    for(int i=1;i<=edges;i++){
        int x,y;
        cin>>x>>y;
        addEdge(x,y);
    }

    cout<<"Enter the source"<<endl;
    int src;
    cin>>src;

    bfs(src);

    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<"node : "<<it->first<<" weight: "<<it->second<<endl;
    }

  return 0;
}










