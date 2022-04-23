#include<stdio.h>
int findgcd(int a,int b)
{
    int res;
    while(b)
    {
        int res;
        res=a%b;
        a=b;
        b=res;
    }
    return a;
}
int main()
{
int a,b,gcd;
scanf("%d%d",&a,&b);
gcd=findgcd(a,b);
printf("%d",gcd);
return 0;
}