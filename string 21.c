#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char c;
    int i = 0,len;
    gets(str);
    c = getchar();
    len = strlen(str);
    while(i<len && str[i]!=c)
            i++;
    while(i < len)
    {
        str[i] = str[i+1];
        i++;
    }
    printf("String after removing first '%c' : %s", c, str);
    return 0;
}
