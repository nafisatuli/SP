#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i, len;
    int freq[26];
    printf("Enter any string: ");
    gets(a);

    len = strlen(a);
    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    for(i=0; i<len; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            freq[a[i] - 97]++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            freq[a[i] - 65]++;
        }
    }
    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}
