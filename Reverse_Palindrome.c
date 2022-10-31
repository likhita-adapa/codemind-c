#include<stdio.h>
int main()
{
    int n,r,sum=0,d=0,r2=0,temp,c;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    d=sum+n;
    r2=0;
    while(d!=r2)
    {
        r2=0;
        c=d;
        while(c!=0)
        {
            r=c%10;
            r2=r2*10+r;
            c=c/10;
        }
        if(r2!=d)
        {
            d=r2+d;
        }
    }
    printf("%d",d);
    return 0;
}