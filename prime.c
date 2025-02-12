#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int n,i=0;
    while(1>0)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        if (prime(n)==1)
        {
            i++;
        }

    }
    printf("%d",i);
    return 0;
}


int prime(int n)
{
    int i=2,flag=0;
    if(n<2)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        do
        {
            if ((n%i)==0)
            {
                return 0;
                break;
            }
            i++;
            flag =1;
        } while (i<=sqrt(n));
        if (flag==1)
        {
            return 1;
        }        
    }
}