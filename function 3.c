#include<stdio.h>
int fnc1(int a,int b);
int fnc2(int a,int b);
int main()
{
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    max=fnc1(a,b);
    min=fnc2(a,b);
    printf("Max:%d\nMin:%d",max,min);
}
int fnc1(int a,int b)
{
    if(a>b)
        return a;
    else if(b>a)
        return b;
}
int fnc2 (int a,int b)
{
    if(a<b)
        return a;
    else if(b<a)
        return b;
}
