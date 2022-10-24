#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[50],i,pro,min;
    int diff1,diff2,flag=0;
    for (i=0; i<50; i++)
    {
        pro=pow(2,i);
        arr[i]=pro;
    }
    for (i=0; i<50; i++)
    {
        if (a<arr[i])
        {
            diff1=arr[i]-a;
            diff2=a-arr[i-1];
            if (diff1>diff2)
            {
                min=diff2;
                flag=1;
                break;
            }
            else
            {
                min=diff1;
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            break;
        }
    }
    printf("%d",min);
    return 0;
}