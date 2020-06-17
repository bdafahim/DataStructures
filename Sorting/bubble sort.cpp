#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char C[n];
  for(int i=0;i<n;i++)
  {
    cin>>C[i];
  }

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(C[j]>C[j+1])
      {
        char tmp=C[j];
        C[j]=C[j+1];
        C[j+1]=tmp;
      }
      for(int i=0;i<n;i++)
      {
        cout<<C[i]<<" ";
      }
      cout<<endl;

    }
  }

    cout<<"sorted array :"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<C[i]<<" ";
  }
}
