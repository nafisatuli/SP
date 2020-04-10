#include<stdio.h>
int main()
{
    int a,b,GCD,p,t,LCM,c;
    scanf("%d %d",&a,&b);
    c=a*b;
    if(a==0)
    {
        GCD=a;
    }
    else if(b==0)
    {
        GCD=b;
    }
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        GCD=a;
    }
    printf("GCD:%d\nLCM:%d\n",GCD,c/GCD);
    return 0;
}
