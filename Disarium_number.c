#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,c=0;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
temp=n;
int sum=0;
while(temp!=0)
{
    int r=temp%10;
    sum=sum+pow(r,c);
    temp=temp/10;
    c--;
 }
 if(sum==n)
 printf("True");
 else
 printf("False");
return 0;

 
}