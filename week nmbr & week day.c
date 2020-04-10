#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    printf("Enter the week number:\n");
    while(n--)
    {
        scanf("%d",&a);
        if(a==1)
        {
            printf("No.%d is Saturday\n",a);
        }
        else if(a==2)
        {
            printf("No.%d is Sunday\n",a);
        }
        else if(a==3)
        {
            printf("No.%d is Monday\n",a);
        }
        else if(a==4)
        {
            printf("No.%d is Tuesday\n",a);
        }
        else if(a==5)
        {
            printf("No.%d is Wednesday\n",a);
        }
        else if(a==6)
        {
            printf("No.%d is Thursday\n",a);
        }
        else if (a==7)
        {
            printf("No.%d is Friday\n",a);
        }
    }
}
