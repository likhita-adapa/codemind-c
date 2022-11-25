#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,l,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        r=sqrt(a);
        if(r*r==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}

