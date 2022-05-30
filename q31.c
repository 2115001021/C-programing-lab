#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    printf("enter the principle amout=");
    scanf("%f", &p);
    printf("enter the rate=");
    scanf("%f", &r);
    printf("enter the time span=");
    scanf("%f", &t);
    printf("the compound intrest on given input=%f", p * pow(1 + (r / 100), t));
    return 0;
}