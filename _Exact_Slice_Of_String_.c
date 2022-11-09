#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,d,x;
    fgets(str,sizeof(str),stdin);
    scanf("%d%d",&x,&d);
    int v=strlen(str);
    for(i=x;i<=d;i++)
    {
        printf("%c",str[i]);
    }
    // printf("%d%d",d,x);
    
}