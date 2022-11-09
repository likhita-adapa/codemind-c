#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s=0,k=0,j,f=0,i,c=0;
    scanf("%d%d",&a,&b);
    s=a+b;
    while(s)
    {
    k++;
   j=k+s;
   f=0;
    for(i=2;i<=sqrt(j);i++)
    {
        
        if(j%i==0)
        {
            f=1;
            break;
        }
        
    }
    if(f==0)
    {
        printf("%d",k);
        c=1;
    }
    if(c==1)
    {
        break;
    }
    }
}
