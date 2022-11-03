#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int temp=0;
        for( j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
 if(n>2)
   { int count=0;
       for(i=0;i<n;i++)
       {  
           if(a[i]!=a[i+1])
           {
               count++;
           }
           if(count==3)
           {
              printf("%d",a[i]);
              break;
           }
        }
   }
  else
  {
      printf("%d",a[0]);
  }
}
   

