#include<stdio.h>
int fun(int no)
{
    int i,fc=0;
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,d,c=0,cc=0,temp;
    scanf("%d",&n);
    temp=n;
    if(fun(n))
    {
        while(n)
        {
            d=n%10;
            if(fun(d))
            {
                cc++;
            }
            n=n/10;
            c++;
        }
        if(c==cc)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}