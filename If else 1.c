#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d\n",a);
    }
    else if(a<b)
    {
        printf("%d\n",b);
    }
}
