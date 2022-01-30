
#include<stdio.h>
int main()
{
    int n,s,r,sum=0;
    scanf("%d",&s);
    n=s;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(s%sum==0)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}
