#include <stdio.h>
int main()
{
    char str[1000],a, b;
    gets(str);
    a=getchar();
    getchar();
    b = getchar();
    int i=0,lastindex=-1;
    while(str[i] != '\0')
    {
        if(str[i] == a)
        {
            lastindex = i;
        }
        i++;
    }
    if(lastindex!=-1)
    {
        str[lastindex]=b;
    }
    printf("%s", str);
    return 0;
}

