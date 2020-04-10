#include<stdio.h>
typedef struct
{
    int d;
    int m;
    int y;
}date;
typedef struct
{
    int ac_no;
    char type;
    char n[100];
    float blnc;
    date l_p;
}customer;
int main()
{
    customer x[100];
    {
        int i;
        for(i=0;i<2;i++)
        {
            scanf("%d %c %s %f %d %d %d\n",&x[i].ac_no,&x[i].type,x[i].n,&x[i].blnc,&x[i].l_p.d,&x[i].l_p.m,&x[i].l_p.y);
        }
        for(i=0;i<2;i++)
        {
            printf("%d %c %s %f %d %d %d\n",x[i].ac_no,x[i].type,x[i].n,x[i].blnc,x[i].l_p.d,x[i].l_p.m,x[i].l_p.y);
        }
    };
}
