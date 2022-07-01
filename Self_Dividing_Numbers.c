#include<stdio.h>
int main()
{
    int a,b,temp,i,r;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            if(r==0||i%r!=0)
            {
                break;
            }
            temp=temp/10;
        }
        if(temp==0)
        {
            printf("%d ",i);
            
        }
    }
    return 0;
}