#include<stdio.h>
int main()
{
    int n,rem,org,rev=0;
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(org==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}