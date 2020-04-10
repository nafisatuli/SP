#include<stdio.h>
struct date
{
    char name[100];
    int month;
    int day;
    int year;
};
static struct date x[100]=
{
    {"mosha",2,7,98},
    {"shiraji",19,8,98},
    {"biltu",8,3,98}
};
int main()
{
    int i;
    for(i=0;i<=2;i++)
    {
        printf("%s %d %d %d\n",x[i].name,x[i].month,x[i].day,x[i].year);
    }
}
