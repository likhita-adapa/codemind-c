#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    if(num/100000000>=1 && num/100000000000<=1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}