#include<stdio.h>
void revarr(int arr[], int ind, int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    revarr(a,0,n);
    return 0;
}

void revarr(int arr[],int ind,int n)
{
    if(ind==n-1)
    {
        printf("%d ",arr[ind]);
    }
    else
    {
        revarr(arr,ind+1,n);
        printf("%d ",arr[ind]);
    }
}