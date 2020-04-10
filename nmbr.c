#include<stdio.h>
int main()
{
    int i,l;
    char a[1000];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='0') printf("one ");
        else if(a[i]=='1') printf("two ");
        else if(a[i]=='2') printf("three");
        else if(a[i]=='3') printf("four ");
        else if(a[i]=='4') printf("five ");
        else if(a[i]=='5') printf("six ");
        else if(a[i]=='6') printf("seven ");
        else if(a[i]=='7') printf("eight ");
        else if(a[i]=='8') printf("nine ");
        else if(a[i]=='9') printf("ten ");

    }
}
