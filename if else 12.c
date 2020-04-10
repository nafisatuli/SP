#include<stdio.h>
int main()
{
    int n,i,a,x;
    int tk[10]= {1000,500,100,50,20,10,5,2,1};
    while(1)
    {
        printf("Enter the amount of TaKa:\n");
        scanf("%d",&n);
        for(i=0; i<9; i++)
        {
            x=n/tk[i];
            printf("%d amount %d\n",tk[i],x);
            n=n%tk[i];

        }

    }
}
