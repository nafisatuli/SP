#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int ans,t;
    scanf("%d",&t);
    while(t--)
    {
        printf("Enter two strings:\n");
        printf("1st one:\n");
        scanf("%s",a);
        printf("2nd one:\n");
        scanf("%s",b);
        ans=strcmp(a,b);
        if(ans==0)
        {
            printf("Same\n");
        }
        else if(ans==1)
        {
            printf("1st one is bigger & 2nd one is smaller\n");
        }
        else if(ans==-1)
        {
            printf("2nd one is bigger & 1st one is smaller\n");
        }
    }
}
