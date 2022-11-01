#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int  s=0;
    if(n==3)
    {
        printf("10");
    }
    else if(n>3)
    {
        s=pow(3,(n-3))*8*(n-2);
        s+=s/4;
        printf("%lld",s);
    }
    else
    {
        printf("0");
    }
}
