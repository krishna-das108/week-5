#include<stdio.h>
void waveSort(int *arr, int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    waveSort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void swap(int *a, int *b);
void waveSort(int *arr, int n)
{
    int j;
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr+i,arr+i+1);
            }
        }
        if(i%2==1)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr+i,arr+i+1);
            }
        }
    }
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}