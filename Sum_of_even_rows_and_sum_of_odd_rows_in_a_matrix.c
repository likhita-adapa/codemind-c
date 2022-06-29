#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],i,j,es=0,os=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i%2==0)
            {
                es=es+a[i][j];
            }
            else if(i%2!=0)
            {
                os=os+a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}