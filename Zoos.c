#include<stdio.h>
int main()
{
    char s[200];
    scanf("%s",s);
    int n=0,c=0,i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='o')
        {
            n++;
        }
        else if(s[i]=='z')
        {
            c++;
        }
    }
    if(n==2*c)
    {
        printf("Yes");
    }
    else
    
       printf("No");
}