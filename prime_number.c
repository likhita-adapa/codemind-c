#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    
}