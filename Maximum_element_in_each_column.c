#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j,c[b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            c[j]=0;
        }
    }
    for(j=0;j<b;j++)
    {
        for(i=0;i<a;i++)
        {
            if(c[j]<arr[i][j])
            {
                c[j]=arr[i][j];
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%d
",c[i]);
    }
}

