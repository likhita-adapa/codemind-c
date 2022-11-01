#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==1)
        {
            if(b%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else if(b%2==0)
        {
            printf("Impossible
");
        }
        else if(a%2==0)
        {
            printf("Even
");
        }
        else
        {
            printf("Odd
");
        }
    }
}

