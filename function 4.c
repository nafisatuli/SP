#include<stdio.h>
int fnc1(int a);
int fnc2 (int a);
int main()
{
    int a,even,odd,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        even=fnc1(a);
        odd=fnc2(a);
        if(even%2==0)
        {
            printf("Even:%d\n",even);
        }
        else
        {
            printf("Odd:%d\n",odd);
        }
    }
}
int fnc1(int a)
{
    if(a%2==0)
        return a;
}
int fnc2 (int a)
{
    if(a%2!=0)
        return a;
}
