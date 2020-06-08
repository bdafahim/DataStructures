#include <bits/stdc++.h>

using namespace std;

int N,ind=0;
int a[100];

void push(int data)
{
    if(ind>=N){
        cout<<"OVERFLOW"<<endl;
        return;
    }
    a[++ind] = data;
    cout<<"Pushed items : "<<a[ind]<<endl;
}

void pop()
{
    if(ind == 0)
    {
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    --ind;
    cout<<"Popped items : "<< a[ind+1]<<endl;
}

void printStack()
{
  cout<<"Stack :"<<" ";
  for(int i=1;i<=ind;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;

}

int main()
{
  cout<<"Enter stackLength : "<<endl;

  cin>>N;


  for(int i=0;i<N;i++)
  {
    int x;
    cin>>x;
    push(x);
    printStack();
  }
  push(10);
  printStack();
  pop();
  printStack();
  pop();
  printStack();
  pop();
  printStack();
  pop();
  printStack();
  pop();
  printStack();
  push(100);
  printStack();

  return 0;
}










