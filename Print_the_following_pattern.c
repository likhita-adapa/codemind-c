#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,temp=a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j || i+j==a-1)
            {
                printf("%d ",temp);
            }
            else
            {
                printf(" ");
            }
        }
        temp-=1;
        printf("
");
    }
    return 0;
}