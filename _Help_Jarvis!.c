#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,a[10],i,r,j,flag=0;
    char n[10],s[2];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",n);
        flag=0;
        for( j=0;j<10;j++)
         a[j]=0;
         for(int i=0;n[i];i++)
         {
             s[0]=n[i];
             s[1]=NULL;
             a[atoi(s)]++;
         }
    
     for(int j=0;j<=9;j++)
     {
         if(a[j]==1)
         {
             while(a[j]==1 && j<=9)
             {
                 j++;
             }
             for(i=j;i<=9;i++)
             {
                 if(a[i]>=1)
                 {
                  flag=1;
                  break;
                 }
             }
         }
         else
         {
             if(a[j]>1)
             {
                 flag=1;
                 break;
             }
         }
     }
     if(flag==0)
      printf("YES
");
     else
      printf("NO
");
    }
}