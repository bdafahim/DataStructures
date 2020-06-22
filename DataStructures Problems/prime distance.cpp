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
#define pb(x) push_back(x)
#define Max 20000000
using namespace std;

int primes[Max+500];
vector<int> prime;

void sieve(){
for(int i = 4;i<= Max;i+=2){
    primes[i]=1;
}
for(int i=3;i*i<=Max;i+=2)
{
    if(!primes[i])
        for(int j=i*i;j<=Max;j+=2*i)
            primes[j]=1;
}
prime.pb(2);
for(int i=3;i<=Max;i+=2){
    if(!primes[i] && !primes[i+2])prime.pb(i);
}
}

struct pairr {
    int i,j;
    pairr(int i,int j) : i(i),j(j) {}
    bool operator < (const pairr& b ) const {
        return b.j < j;
    }
};

vector<pairr> dist;
int main ()
{

    sieve();
    int n,m;
    while(scanf("%d %d",&n,&m)==1 && n && m){
        int cnt = 0;
        for(int i = n;i<=m;i++)
        {
            if(!primes[i]){
                dist.push_back(pairr(i,cnt));
                cnt=0;
            }
            else
            {
                cnt++;
            }

        }
        sort(dist.begin(),dist.end());
            cout<< dist[1].i << ' ' <<dist[1].i-dist[1].j << endl;
    }
    return 0;
}
