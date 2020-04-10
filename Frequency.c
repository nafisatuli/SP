#include<stdio.h>
#include<string.h>
int main()
{
    int a[10]={};
    int i,l;
    char b[1000];
    while(1)
    {
        scanf("%s",b);
    l=strlen(b);
    for(i=0;i<l;i++)
    {
       a[b[i]-48]++;
    }
    for(i=0;i<10;i++)
    {
      printf("Frequency of %d = %d\n",i,a[i]);
    }
   for(i=0;i<10;i++)
    {
     a[i]=0;
    }
    printf("\n\n\n\n\n\n");
    }
}
