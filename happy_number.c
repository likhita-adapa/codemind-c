#include<stdio.h>
int main()
{
    int i,j,num,temp,sum=0;
    scanf("%d",&num);
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(num>0)
        {
            j=num%10;
            sum+=(j*j);
            num=num/10;
        }
        num=sum;
    }
    if(sum==1)
    printf("True");
    else
    printf("False");
    return 0;
}