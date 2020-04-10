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
        if(a>='a'&&a<='z'||a>='A'&&a<='Z')
        {
            printf("This is an alphabet\n");
        }
        else if(a>='0'&&a<='9')
        {
            printf("This is a digit\n");
        }
        else
        {
            printf("This is a special character\n");
        }


    }
}
