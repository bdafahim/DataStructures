#include<bits/stdc++.h>
using namespace std;

void showStack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<"\n";
}

int main()
{
    stack<int>s;
    for(int i=1;i<=10;i++)
    {
        s.push(i+5);
    }

    cout<<"The stack is: ";
    showStack(s);

    cout<<"\ns.size(): "<<s.size();
    cout<<"\ns.top(): "<<s.top();

    s.pop();
    cout<<"\nThe stack is: ";
    showStack(s);
    cout<<"\ns.size(): "<<s.size();
    cout<<"\ns.top(): "<<s.top();
    s.push(100);

    cout<<"\nThe stack is: ";
    showStack(s);
    cout<<"\ns.size(): "<<s.size();
    cout<<"\ns.top(): "<<s.top();


}
