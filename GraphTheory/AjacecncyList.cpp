#include <bits/stdc++.h>
#define INF 1001001001
#define PI 3.1415926535897932384626
#define Max 1000000

using namespace std;

vector<int>edge[Max];
vector<int>cost[Max];

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
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }

    printElements(edge,edges);

  return 0;
}










