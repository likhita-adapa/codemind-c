#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==0)
       printf("True");
    c=a+b;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
