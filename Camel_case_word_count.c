#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,c=0,count;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    if(str[0]>=97 && str[0]<=122)
    {
        count=0;
        for(i=0;i<c;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                count++;
            }
        }
        printf("%d",count+1);
    }
    else
    {
        count=0;
        for(i=0;i<c;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                count++;
            }
        }
        printf("%d",count);
    }
}
