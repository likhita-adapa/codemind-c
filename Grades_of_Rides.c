#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>50&&y>60&&z>100)
    {
        printf("%d",10);
        
    }
    else if(x>50&&y>60)
    {
        printf("%d",9);
        
    }
    else if(y>60&&z>100)
    {
        printf("%d",8);
    }
    else if(x>50&&z>100)
    {
        printf("%d",7);
        
    }
    else if(x>50||y>60||z>100)
    {
        printf("%d",6);
    }
    else
    printf("%d",5);
    return 0;
}