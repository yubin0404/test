#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1;i<=5;i++)
    {
        for (j = 0;i-j>=1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}