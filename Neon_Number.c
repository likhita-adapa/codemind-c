#include<stdio.h>
int main()
{
    int n,r,sn,sum=0;
    scanf("%d",&n);
    sn=n*n;
    while(sn>0)
    {
        r=sn%10;
        sn=sn/10;
        sum=sum+r;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}