#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= 2 * n; a++)
    {
        for (int b = 1; b <= n - a; b++)
        {
            printf(" ");
        }
        {
            for (int c = 1; c <= a * 2 - 1; c++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    for(int d=1;d<=n-1;d++)
    {
        for(int e=1;e<=d;e++)
        {
            printf(" ");
        }
        for(int f=1;f<=n-d;f++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}