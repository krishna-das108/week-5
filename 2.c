#include<stdio.h>
void hailstoneSequence(int *num, int *steps);
int main()
{
    int steps=0,num;
    scanf("%d",&num);
    hailstoneSequence(&num,&steps);
    printf("\n%d",steps);
    return 0;
}

void hailstoneSequence(int *num, int *steps)
{
    if(*num==1)
    {
        printf("%d ",*num);
    }
    else
    {
    if(*num%2==0)
    {
        *steps+=1;
        printf("%d ",*num);
        *num/=2;
        hailstoneSequence(num,steps);
    }
    if(*num!=1&&*num%2==1)
    {
        *steps+=1;
        printf("%d ",*num);
        *num*=3;
        *num+=1;
        hailstoneSequence(num,steps);
    }
}
}