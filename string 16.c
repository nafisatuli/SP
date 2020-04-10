#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],ch;
    int i,k=0;
    printf("Enter the string:\n");
    scanf("%s",a);
    printf("Enter the character:\n");
    scanf("%c",&ch);
    ch=getchar();
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==ch)
        {

            k++;


            if(k==0)
            {
                printf("%c is not found\n",ch);
            }
            else
            {
                printf("occurrence of %c at %d\n",ch,i);
            }
        }
    }
}
