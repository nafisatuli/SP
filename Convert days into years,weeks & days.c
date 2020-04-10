#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {

        if(i==1||i==5)
        {
            printf(" ");
            for(j=1; j<=4; j++)
                printf("*");
            printf("\n");
        }
        if(i==2)
        {
            for(k=1; k<=4+2; k++)
                printf("*");
            printf("\n");
        }
        else if(i==3||i==4)
        {
            printf(" ");
            printf("*");
            for(k=1; k<=2; k++)
                printf(" ");
            printf("*");
            printf("\n");
        }
    }
}
