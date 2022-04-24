#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    { 
      for(i=0;i<=n;i++)
      {
        if(i*(i+1)==n)
        count++;
      }
    }
if(count>0)
printf("YES");
else
printf("NO");
return 0;
}