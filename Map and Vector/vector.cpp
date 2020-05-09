#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> g1;

    for(int i=1; i<=10; i++)
        g1.push_back(i);

    for(auto i=g1.begin(); i!=g1.end(); i++)
        cout<<*i<<" ";

    cout<<"\n";

    for(auto i=g1.rbegin(); i!=g1.rend(); i++)
        cout<<*i<<" ";

    cout<<"\n";

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    cout << "\nReference operator [g] : g1[0] = " << g1[0];

    cout << "\nat : g1.at(0) = " << g1.at(0);

    cout << "\nfront() : g1.front() = " << g1.front();

    cout << "\nback() : g1.back() = " << g1.back();
    cout<<"\n";
    for(int i=0; i<g1.size();i++)
    {
        cout<<g1[i]<<"\n";
    }

    return 0;
}
