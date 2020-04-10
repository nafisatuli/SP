#include<stdio.h>
int main()
{
    char a;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        printf("Enter any character:\n");
        scanf(" %c",&a);
        if(a>='a'&&a<='z')
        {
            printf("%c is in lowercase.\n",a);
        }
        else if(a>='A'&&a<='Z')
        {
            printf("%c is in uppercase.\n",a);
        }
    }
}
