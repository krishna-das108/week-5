#include<stdio.h>
int rep=0;
int freq(int ind,int a[],int n);
int main()
{
    int n,i,f;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f = freq(i,arr,n);
        if(rep==1)
        {
            rep =0;
            continue;
        }
        printf("%d ",f);
    }
    return 0;
}

int freq(int ind,int a[],int n)
{
    int i, f=0;
    for(i=0;i<ind;i++)
    {

        if(a[ind]==a[i])
        {
            rep=1;
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[ind]==a[i])
        {
            f++;
        }
    }
    return f;
}