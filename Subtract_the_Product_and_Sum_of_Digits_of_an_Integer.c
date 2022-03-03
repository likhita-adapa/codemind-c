#include<stdio.h>
int main()
{
    int n,r,pro=1,sum=0,res;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        pro=pro*r;
        sum=sum+r;
        res=pro-sum;
    }
    printf("%d",res);
}