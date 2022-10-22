#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int number(char* s , int* i, int c)
{
    *i += 1;
    int n = s[*i] - '0';
    while (n >= 0 && n <= 9)
    {
        c *= 10;
        c += n;
        *i += 1;
        n = s[*i] - '0';
    }
    return c;
}
int calculate(char* s)
{                  
    int ans = 0;
    int len = strlen(s);
    int last_sign = 0;
    int Plus_or_Minus = 0;
    int parentheses = 0;
    int change =  0;
    int parentheses_location[1000] = {0};

    for (int i = 0 ; i < len ;)
    {
        int c = s[i] - '0';
        switch (c) 
        {
            case -5:last_sign = 0;
                    if (change % 2 == 1)
                    {
                        Plus_or_Minus = 1;
                    } else Plus_or_Minus = 0;
                    i++;
                    break;
            case -3:last_sign = 1;
                    if (change % 2 == 1)
                    {
                        Plus_or_Minus = 0;
                    } else Plus_or_Minus = 1;
                    i++;
                    break;
            case -8:if (last_sign == 1){
                        parentheses_location[parentheses]++;
                        change++;
                    }
                    parentheses++;
                    i++;
                    break;
            case -7:parentheses--;
                    if (parentheses_location[parentheses] == 1)
                    {
                        parentheses_location[parentheses]--;
                        change--;
                    }
                    i++;
                    break;
            case -16:i++;
                     break;
            default:if (Plus_or_Minus == 0)
                    {
                        ans += number(s ,&i, c);
                    } 
                    else ans -= number(s ,&i, c);
                    break;
        }
    }
    return ans;
}
int main()
{
    char str[10000];
    int ans;
    scanf("%[^
]s",str);
    printf("%d",calculate(str));
}