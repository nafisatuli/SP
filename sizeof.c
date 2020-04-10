#include<stdio.h>
int main()
{
    struct date
    {
        int m;
        int d;
        int y;
    };
    struct acc
    {
        int no;
        char name[100];
        float blnc;
        struct date l_p;
    } customer;
    printf("%d\n",sizeof customer);
    printf("%d\n",sizeof(struct acc));
}
