#include<stdio.h>
int main()
{
    int m,n,i,j,ref=1;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int zcol=0, sum=0;
    for(j=0;j<n;j++)
    {

        for(i=0;i<m;i++)
        {
            sum+=arr[i][j]*arr[i][j];
        }
        if(sum==0)
        {
            zcol++;
            sum=0;
        }
        else
        {
            break;
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=j+1-zcol;i>=0 && i<m;i++)
        {
            if(arr[i][j]==0)
            {
                ref=1;
            }
            else
            {
                ref=0;
                break;
            }
        }
        if(ref==0)
        {
            break;
        }
    }
    printf("%d",ref);
    return 0;
}    