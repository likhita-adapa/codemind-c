#include<stdio.h>
int main()
{
    int n,i,a[50],b[50],num=0,s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        num=num*10+a[i];
    }
    num+=1;
    i=0;
    while(num!=0)
    {
        r=num%10;
        b[i]=r;
        s++;
        i++;
        num/=10;
    }
    for(i=s-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}