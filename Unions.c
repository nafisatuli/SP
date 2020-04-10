#include<stdio.h>
int main()
{
    union id
    {
        char color;
        int size;
    };
    struct
    {
        char mf[20];
        float cost;
        union id des;
    } hijab,skarf;
    printf("%d\n",sizeof(union id));
    hijab.des.color="w";
    printf("%c %d\n",hijab.des.color,hijab.des.size);
    hijab.des.size=12;
    printf("%c %d\n",hijab.des.color,hijab.des.size);
}
