#include <stdio.h>

int main(void)
{
    int i = 2;

    while (i <= 9)
    {
        int j = 1;  // 초기화가 필요함
        while (j <= 9)
        {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}