#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

using namespace std;

map<int,int>visited;

void bfs(int s,map<int,vector<int> >G)
{
    queue<int>q;
    q.push(s);
    visited[s]=0;

    while(!q.empty())
    {
        int top=q.front();

        for(int i=0;i<G[top].size();i++)
        {
            int n=G[top][i];

            if(!visited.count(n))
            {
                visited[n]=visited[top]+1;
                q.push(n);
            }
        }
        q.pop();
    }
}

int main ()
{
    int edges,cases=0;
    while(scanf("%d",&edges)==1 & edges!=0)
    {
        map<int,vector<int> >G;
        for(int i=0;i<edges;i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            G[x].push_back(y);
            G[y].push_back(x);
        }

        int ttl,source;

        while(scanf("%d%d",&source,&ttl)==2)
        {
            if(source==0 && ttl==0) break;
            map<int,int>::iterator it;

            visited.clear();

            bfs(source,G);

            int count=0;

            for(it=visited.begin();it!=visited.end();it++)
            {
                //cout<<(*it).first<<' '<<(*it).second<<endl;
                if((*it).second>ttl)
                {
                    ++count;
                }
            }
            //cout<<G.size()<<' '<<visited.size()<<endl;

            count=count+G.size()-visited.size();


            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cases,count,source,ttl);


        }
    }

    return 0;
}
