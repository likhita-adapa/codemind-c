#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,d=strlen(s);
    for(int j=0;j<strlen(s);j++)
    {
        if(s[j]=='I')
        {
            printf("%d " ,i);
            i++;
        }
        else
        {
            printf("%d ",d);
            d--;
        }
    }
    printf("%d ",i);
}