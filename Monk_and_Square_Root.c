#include<stdio.h>
int main()
{
    int t,m,n,fl;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        fl=0;
        for(int i=0;i<=m;i++){
            long int temp= (long int)i*i;
            if(temp%m==n){
                printf("%d
",i);
                fl=1;
                break;
            }
        }
        if(fl==0)
           printf("-1
");
    }
    return 0;
}