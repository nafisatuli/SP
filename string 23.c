#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char c;
    int i, j,len;
    gets(str);
    c = getchar();
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == c)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("String after removing '%c': %s", c, str);
    return 0;
}
