#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char c;
    int n;
    char d;
    char b[1000];
    int i, j = 0;
    gets(a);
    c=getchar();
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        if (a[i] != c)
        {
            d = a[i];
            b[j] = d;
            j++;
        }
    }
    b[j] = '\0';
    printf("\ncorrected string is : %s", b);
}
