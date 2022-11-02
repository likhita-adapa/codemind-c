#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int k=0;k<x;k++)
    {
        int n,c=0;
        scanf("%d",&n);
        int a;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2!=0)
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            c--;
        }
        printf("%d
",c/2);
        
        
    }
}