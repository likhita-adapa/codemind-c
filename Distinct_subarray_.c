#include<stdio.h>
int main()
{
    int a,b,c=0,x;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b+1;i++)
    {
        x=0;
        for(int j=i;j<b+1;j++)
        {
           x+=j;
           if(x%2!=0)
           {
                c++;
           }
        }
    }
    printf("%d",c);
}