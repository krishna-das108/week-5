#include<stdio.h>
#include<math.h>
int stgno(int n);
int main()
{
    int res, n;
    scanf("%d",&n);
    if(n>=0)
    {
        stgno(n);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}


int fact(int n);
int stgno(int n)
{
    int res=0, temp=n;
    while(n>0)
    {
        res= res +fact((n%10));
        n= n/10;
    }
    if(res == temp)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}

int fact(int n)
{
    int fac=1, i=0;
    if (n!=0)
    {
        fac = fact(n-1)*n;
        return fac;  
    }
    else
    {
        return 1;
    }
}