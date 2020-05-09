#include<bits/stdc++.h>

using namespace std;

#define Max 100

int parent[Max];
int Size=5;

void makeSet(int n)
{
    parent[n] = n;
}

int Find(int representative)
{
    if(parent[representative] == representative)
        return representative;
    return parent[representative] = Find(parent[representative]);
}

void Union(int a, int b)
{
    int u = Find(a);
    int v = Find(v);

    if(u == v)
    {
        cout<<"Friends"<<endl;
    }
    else
    {
        parent[u] = v;
    }
}

int main()
{
    for(int i=0; i<Size;i++)
    {
        makeSet(i);
    }

    return 0;
}
