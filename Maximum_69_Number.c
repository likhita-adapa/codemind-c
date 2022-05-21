#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int k,r,d,flag=0;
    scanf("%d",&N);
    d=log10(N);
    while(N)
    {
        r=N/(int)ceil(pow(10,d));
        if(r==6 && flag==0)
        {
        printf("%d",9);
           flag++;
          
          
        }
        else
          printf("%d",r);
        N=N%(int)ceil(pow(10,d));
        d--;
        
        
    }
}