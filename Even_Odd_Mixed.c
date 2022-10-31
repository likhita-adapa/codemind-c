#include<stdio.h>
int main()
{
    int n,r,even=0,odd=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r%2==0)
        even+=1;
        else
        odd+=1;
        n=n/10;
    }
    if(even>0&&odd<1)
    printf("Even");
    else if(odd>0&&even<1)
    printf("Odd");
    else if(odd>0&&even>0)
    printf("Mixed");
    return 0;
    
}