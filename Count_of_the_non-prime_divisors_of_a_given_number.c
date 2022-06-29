#include<stdio.h>
int isprime(int x)
{
    int j,c=0;
    for(j=1;j<=x;j++)
    {
        if(x%j==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,i,res=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i))
            {
                res++;
            }
        }
    }
    printf("%d",res);
}