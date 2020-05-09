#include<bits/stdc++.h>
using namespace std;

void showQueue(queue<int>q)
{
    cout<<"\n";
    while(!q.empty())
    {
        cout<<'\t'<<q.front();
        q.pop();
    }
    cout<<"\n";
}

void showFront(queue<int>q)
{
    cout<<"\nfront: "<<q.front();
}
void showBack(queue<int>q)
{
    cout<<"\nback: "<<q.back();
}
void showSize(queue<int>q)
{
    cout<<"\nSize: "<<q.size();
}

int main()
{
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(3);
    q.push(15);

    showQueue(q);
    showFront(q);
    showBack(q);
    showSize(q);

    q.pop();

    showQueue(q);
    showFront(q);
    showBack(q);
    showSize(q);


    q.push(5);
    q.push(50);

    showQueue(q);
    showFront(q);
    showBack(q);
    showSize(q);

}











