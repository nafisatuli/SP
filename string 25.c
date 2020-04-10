#include <stdio.h>
int main()
{
    char str[1000],a, b;
    gets(str);
    a=getchar();
    getchar();
    b = getchar();
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == a)
        {
            str[i] = b;
            break;
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
