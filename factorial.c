#include<stdio.h>
int main()
{
    int x,i=1,fac=1;
    scanf("%d",&x);
    while(i<=x)
    {
fac=fac*i;
i=i+1;

    }
    printf("%d",fac);
    return 0;
}