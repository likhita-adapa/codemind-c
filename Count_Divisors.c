#include<stdio.h>
int main()
{
    int l,r,k,c=0,i;
    scanf("%d%d%d",&l,&r,&k,&c);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}