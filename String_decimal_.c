#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[10000];
        scanf("%s",str);
        int flag=0,j;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>=48 && str[j]<=57)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
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
    return 0;
}