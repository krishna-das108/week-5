#include<stdio.h>
#include<math.h>

int main()
{
    int sum =0 , i,n;
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=0;i<=n;i++)
        {
            sum = sum + (pow(-1,i+1))*i;
        }
        printf("%d\n",sum);
    }
    else
    {
        printf("Invalid input\n");

    }
    return 0;
}