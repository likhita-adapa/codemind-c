#include<stdio.h>
int main()
{
    int n,p=0,s=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
            
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
           {
               p=p+a[i][j];
           }
           if((i+j)==(n-1))
           {
               s=s+a[i][j];
           }
           
        }
            
    }
    printf("Principal Diagonal:%d
",p);
    printf("Secondary Diagonal:%d
",s);
}

