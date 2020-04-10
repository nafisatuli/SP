#include <stdio.h>
int perfect(int n);
void fnc1(int low, int high);
int main()
{
    int low, high;

    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &low);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &high);

    printf("All perfect numbers between %d to %d are: \n", low, high);
    fnc1(low, high);

    return 0;
}
int perfect(int low)
{
    int i, sum;

    sum = 0;
    for(i=1; i<low; i++)
    {
        if(low % i == 0)
        {
            sum += i;
        }
    }
    if(sum == low)
        return 1;
    else
        return 0;
}
void fnc1(int low, int high)
{
    while(low <= high)
    {
        if(perfect(low))
        {
            printf("%d ", low);
        }

        low++;
    }
}
