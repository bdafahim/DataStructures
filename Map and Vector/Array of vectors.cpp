#include<bits/stdc++.h>
using namespace std;

vector<int>v[5];

void insertionNArrayOfVectors()
{
    for(int i=0; i<5;i++)
    {
        for(int j=i+1; j<5; j++)
        {
            v[i].push_back(j);
        }
    }
}

void printElements()
{
    for(int i=0; i<5; i++)
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
    insertionNArrayOfVectors();
    printElements();
}
