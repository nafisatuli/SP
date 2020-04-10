#include<stdio.h>
int main()
{
    int a,b,res,t;
    printf("Enter base and power: ");
    scanf("%d %d",&a,&b);
    res=power(a,b);
    printf("%d^%d=%d\n",a,b,res);
    return 0;
}
int power(int a,int b)
{
    if(b!=0)
        return (a*power(a,b-1));
    else
        return 1;
}
