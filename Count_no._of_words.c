#include <stdio.h>
#include <string.h>
 
int  main()
{
    char s[200];
    int count = 1, i;
    scanf("%[^
]s", s);
    for (i = 0;s[i] != NULL;i++)
    {
        if (s[i] == ' ')
        {
            count++;    
        }
	}
    printf("%d",count);
}