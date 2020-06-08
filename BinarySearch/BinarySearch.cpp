#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (x<array[mid]
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main()
{
    int n,low,high,mid;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int a[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the digit you want to find"<<endl;

    int x;
    cin>>x;

    int result = binarySearch(a, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);


  return 0;
}










