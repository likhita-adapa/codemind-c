#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    long long int se;
    scanf("%lld",&se);
    long long int n=0,l,k,i,count=0,m=0;
    for(i=0;a[i]!=NULL;i++)
    {
        n++;
    }
    l=se/n;
    k=se%n;
    for(i=0;i<n;i++)
    {
        if(a[i]=='a')
        {
            count++;
        }
    }
    m=count*l;
    for(i=0;i<k;i++)
    {
        if(a[i]=='a')
        {
            m++;
        }
    }
    printf("%lld",m);
}


