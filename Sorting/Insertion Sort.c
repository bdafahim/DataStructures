#include<stdio.h>
#include<math.h>
void InsertionSort(int arr[],int n)
{
    int i,j,key,k;
    for(i=1;i<n;i++)
    {
        printf("\nStep :%d\n Array: ",i);
//        for(k=0;k<=i;k++)
//            printf(" %d ",arr[k]);

        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for(k=0;k<=i;k++)
            printf(" %d ",arr[k]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    int p;
    for(p=0;p<n;p++)
        scanf("%d",&arr[p]);
    InsertionSort(arr,n);
    int q;
    printf("\nSorted Array\n");
    for(q=0;q<n;q++)
        printf(" %d ",arr[q]);
    return 0;
}

