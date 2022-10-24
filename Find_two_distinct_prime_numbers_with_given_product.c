#include<stdio.h>
int main()
{
    int n,i,t=0,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                t++;
            }
            if(t==2)
            {
                printf("%d %d",i,n/i);
                return 0;
            }
        }
        if(i==n-1)
        printf("-1");
    }
        return 0;
}