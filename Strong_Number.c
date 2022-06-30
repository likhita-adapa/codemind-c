#include<stdio.h>
 
int main()
 
{
 
 int num,i,fact,r,sum=0,temp;
 
 
 scanf("%d",&num);
 
 temp=num;
 
 while(num)
 
 {
 
     i=1,fact=1;
 
     r=num%10;
 
     while(i<=r)
 
     {
 
        fact=fact*i;
 
        i++;
 
     }
 
     sum=sum+fact;
 
     num=num/10;
 
}
 
 
 
 if(sum==temp)
 
  printf("The number %d is a strong number",temp);
 
 else
 
  printf("The number %d is not a strong number",temp);
 
 return 0;
 
}