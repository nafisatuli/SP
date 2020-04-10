#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char c;
    int i,len,l;
    gets(str);
    c = getchar();
    len = strlen(str);
    l ='\0' ;
    i=0;
    while(i<len)
    {
        if(str[i] == c)
        {
            l= i;
        }
        i++;
    }
    if(l != NULL)
    {
        i = l;
        while(i<len)
        {
            str[i] = str[i+1];
            i++;
        }
    }
    printf("String after removing last '%c' : %s", c, str);
    return 0;
}
