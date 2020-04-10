
#include<stdio.h>
int main()
{
    int i,l,p;
    char a[1000];

    while(1)
    {
        scanf("%s",a);
    l=strlen(a);
    i=l;
        if(l==1)
    {
        i=0;
        if(a[i]=='1') printf("one ");
        else if(a[i]=='2') printf("two ");
        else if(a[i]=='3') printf("three");
        else if(a[i]=='4') printf("four ");
        else if(a[i]=='5') printf("five ");
        else if(a[i]=='6') printf("six ");
        else if(a[i]=='7') printf("seven ");
        else if(a[i]=='8') printf("eight ");
        else if(a[i]=='9') printf("nine ");
        else if(a[i]=='0') printf("zero ");
    }
    else if(l==2)
    {
        for(p=0;p<l;p++)
        {
            if(p==0)
            {
                if(a[0]=='1')
                {
                    printf("ten ");
                }

                else if(a[0]=='2')
                {
                    printf("twenty ");
                }

                else if(a[0]=='3')
                {
                    printf("therty ");
                }
                else if(a[0]=='4')
                {
                    printf("fourty ");
                }
                else if(a[0]=='5')
                {
                    printf("fifty ");
                }
                else if(a[0]=='6')
                {
                    printf("sixty ");
                }
                else if(a[0]=='7')
                {
                    printf("seventy ");
                }
                else if(a[0]=='8')
                {
                    printf("eighty ");
                }
                else if(a[0]=='9')
                {
                    printf("ninety ");
                }
            }
            else if(p==1)
            {
                i=1;
                if(a[i]=='1') printf("one ");
                else if(a[i]=='2') printf("two ");
                else if(a[i]=='3') printf("three ");
                else if(a[i]=='4') printf("four ");
                else if(a[i]=='5') printf("five ");
                else if(a[i]=='6') printf("six ");
                else if(a[i]=='7') printf("seven ");
                else if(a[i]=='8') printf("eight ");
                else if(a[i]=='9') printf("nine ");
            }
        }
    }
         else if(l==3)
          {
        for(p=0;p<l;p++)
        {
            if(p==0)
            {
                if(a[0]=='1')
                {
                    printf("one hundred ");
                }

                else if(a[0]=='2')
                {
                    printf("two hundred ");
                }

                else if(a[0]=='3')
                {
                    printf("three hundred ");
                }
                else if(a[0]=='4')
                {
                    printf("four hundred ");
                }
                else if(a[0]=='5')
                {
                    printf("five hundred ");
                }
                else if(a[0]=='6')
                {
                    printf("six hundred ");
                }
                else if(a[0]=='7')
                {
                    printf("seven hundred ");
                }
                else if(a[0]=='8')
                {
                    printf("eight hundred ");
                }
                else if(a[0]=='9')
                {
                    printf("nine hundred ");
                }
            }
            else if(p==1)
            {
                if(a[p]=='1')
                {
                    printf("ten ");
                }

                else if(a[p]=='2')
                {
                    printf("twenty ");
                }

                else if(a[p]=='3')
                {
                    printf("therty ");
                }
                else if(a[p]=='4')
                {
                    printf("fourty ");
                }
                else if(a[p]=='5')
                {
                    printf("fifty ");
                }
                else if(a[p]=='6')
                {
                    printf("sixty ");
                }
                else if(a[p]=='7')
                {
                    printf("seventy ");
                }
                else if(a[p]=='8')
                {
                    printf("eighty ");
                }
                else if(a[p]=='9')
                {
                    printf("ninety ");
                }
            }
            else if(p==2)
            {
                i=p;
                if(a[i]=='1') printf("one ");
                else if(a[i]=='2') printf("two ");
                else if(a[i]=='3') printf("three ");
                else if(a[i]=='4') printf("four ");
                else if(a[i]=='5') printf("five ");
                else if(a[i]=='6') printf("six ");
                else if(a[i]=='7') printf("seven ");
                else if(a[i]=='8') printf("eight ");
                else if(a[i]=='9') printf("nine ");
            }
        }
    }
    }

}
