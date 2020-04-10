#include<stdio.h>
int fnc1(int a,int b);
int main()
{
    int a,b,GCD,p,t,n,c;
    scanf("%d %d",&a,&b);
    GCD=fnc1(a,b);
    printf("GCD:%d\n",GCD);
}

int fnc1(int a,int b)
{
    int t;
    if(b==0)
        return a;
    while (b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
