#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    if(k>n)
    {
        k = k%n;
    }
    for(i=n-k;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    for(i=0;i<n-k;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}