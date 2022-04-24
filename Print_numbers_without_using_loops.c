#include<stdio.h>
int main()
{
    int N,i=1;
    scanf("%d",&N);
    if(N<=0||N>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
    else
    {
        x:
        printf("%d ",i);
        i++;
        if(i<=N)
        {
            goto x;
        }
    }
}