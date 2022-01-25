
#include<stdio.h>
int main()
{
    int L,B,W,C;
    int area,cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=((L+(2*W))*(B+(2*W)))-(L*B);
    cost=area*C;
    printf("%d",cost);
    return 0;
}
