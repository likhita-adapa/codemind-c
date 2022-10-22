#include<stdio.h>
int main()
{
    int n,d,a,c=0,o=0,max=0,res=0;
    scanf("%d %d",&n,&d);
    while(n!=0)
    {
        a=n%d;
        n=n/d;
        if(a==0)
        {
            o=1;
            res++;  
            c=res;
        }
        else
        {
            if(c>max)
            {
                max=c;
            }
            res=0;
        }
    }
    if(o==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}