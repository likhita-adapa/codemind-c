#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int i,sum=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i])>='0'&&(str[i])<='9')
        {
            sum+=(str[i]-'0');
        }
    }
    printf("%d",sum);
}