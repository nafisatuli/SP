#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i,v=0,c=0,s=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
            v++;
        }
        else if(a[i]==' '||a[i]=='.')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("Vowels:%d\nConsonent:%d\nSpecial characters:%d\n",v,c,s);
}


