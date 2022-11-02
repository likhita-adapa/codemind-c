#include<stdio.h>
int main()
{
    int x,l=0;
    scanf("%d",&x);
    for(int k=0;k<x;k++)
    {   
        l++;
        int n;
        scanf("%d",&n);
        int c=0;
        int a[n],p1,p2;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            p1=-1;
            p2=-1;
            if(i==0)
            {
                if (a[i]>a[i+1])
                {
                    c++;
                }
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    if (a[j]>a[i])
                    {
                        p1=1;
                        break;
                    }
                    else if (a[j]<a[i])
                    {
                        p1=0;
                    }
                }
                if(i==(n-1))
                {
                    if(p1==0)
                    {
                        c++;
                    }
                }
                else
                {
                    if (a[i]>a[i+1])
                    {
                        p2=1;
                    }
                    if(p1==0 and p2==1)
                    {
                        c++;
                    }
                }
            }
        }
        printf("Case #");
        printf("%d",l);
        printf(":");
        printf(" %d
",c);
    }
}

