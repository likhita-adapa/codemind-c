#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    int l,i;
    fgets(str,100,stdin);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        c=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=c;
    }
    printf("%s",str); 
    return 0;
}