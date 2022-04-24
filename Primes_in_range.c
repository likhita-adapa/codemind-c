#include<stdio.h>
int main()
{
    int m,n,s,i,c=0;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++)
    {
        s=0;
        for(i=2;i*i<=m;i++)
        {
            if(m%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0&&m!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}