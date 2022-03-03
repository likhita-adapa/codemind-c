#include<stdio.h>
int main()
{
    int a,b,parkarea,fencearea,cost,totalcost,d,area;
    scanf("%d%d%d%d",&a,&b,&d,&cost);
    parkarea=a*b;
    fencearea=(a-(2*d))*(b-(2*d));
    area=(parkarea-fencearea);
    totalcost=area*cost;
    if(fencearea>0)
    {
        printf("%d",totalcost);
    }
    else
    {
        printf("Impossible");
    }
}