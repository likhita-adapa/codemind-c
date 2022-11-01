#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if(s2-s1<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",s2-s1);
    }
    
}