#include<stdio.h>
#include<math.h>
int main()
{
  int i,sqr=0,m,n,j,count=0;
  scanf("%d%d",&m,&n);
  if(m==1)
  m=2;
  for(i=m;i<=n;i++)
  {
      count=0;
      for(j=2;j<=sqrt(i);j++)
      {
          if(i%j==0)
          count++;
      }
      if(count==0)
      sqr++;
    }
    printf("%d",sqr);
    return 0;
    return 0;
}