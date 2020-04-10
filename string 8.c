#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,al=0,d=0,s=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            al++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            d++;
        }
        else
        {
            s++;
        }
    }
    printf("Alphabet:%d\nDigit:%d\nSpecial character:%d\n",al,d,s);

}
