
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
    };
    static struct hijab skarf ={"American",25.00,"white"};
    printf("%d\n",sizeof(union id));
    printf("%s %5.2f\n",skarf.mf,skarf.cost);
    printf("%s %d\n",skarf.des.color,skarf.des.size);
    skarf.des.size=12;
    printf("%s %5.2f\n",skarf.mf,skarf.cost);
    printf("%s %d\n",skarf.des.color,skarf.des.size);


}
