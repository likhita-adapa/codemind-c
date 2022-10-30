#include<stdio.h>
int main()
{
    int t,k=0,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        k=0;
        char str[100];
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]==str[j+1])
            {
                k++;
            }
        }
        printf("%d
",k);
    }
}