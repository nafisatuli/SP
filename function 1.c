#include<stdio.h>
int res(int cube);
int main()
{
    int a,cube;
    scanf("%d",&a);
    cube=res(a);
    printf("%d",cube);
}
int res(int a)
{
    return (a*a*a);
}
