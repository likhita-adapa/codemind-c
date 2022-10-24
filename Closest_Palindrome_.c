#include<stdio.h>
int rev(int num)
{
    int sum=0,r;
    while (num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num/=10;
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    int i,l=0,f=0,dl=0,df=0;
    for (i=a-1; i>=0; i--)
    {
        if (rev(i)==i)
        {
            f=i;
            break;
        }
    }
    for (i=a+1; i<=10000; i++)
    {
        if (rev(i)==i)
        {
            l=i;
            break;
        }
    }
    df=a-f;
    dl=l-a;
    if (df==dl)
    {
        printf("%d %d",f,l);
    }
    else if (df>dl)
    {
        printf("%d",l);
    }
    else
    {
        printf("%d",f);
    }
    return 0;
}