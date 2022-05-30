#include<stdio.h>
int main()
{
    int a,b,c,d,e=65;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
        printf("%c",e);
        e++;
        }
        {
            for(c=1;c<=(10-2*a);c++)
            {
                printf(" ");
            }
            {
                for(d=1;d<=a;d++)
                {
                   if(e<=90)
                   {
                   printf("%c",e);
                   e++;
                }
                   else
                   {
                       printf("%c",e-26);
                   e++;
                   }
                }
                printf("\n");

            }
        }

    }
    return 0;
}