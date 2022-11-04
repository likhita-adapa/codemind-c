#include<stdio.h>
long int lcm(long int a,long int b)
{
    long int max=a;
    if(a<b)
    {
        max=b;
    }
    long int l=max;
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
            return l;
        }
        else
        {
            l=l+max;
        }
    }
}
int main()
{
    int n,a[1000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long int l=lcm(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        l=lcm(l,a[i]);
        
    }
    printf("%d",l);
}