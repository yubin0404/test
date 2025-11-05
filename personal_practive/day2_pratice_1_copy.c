#include <stdio.h>

int main(void)
{
    int *score[5] = {10, 20, 30, 40, 50};
    int total = 0;
    int temp = 0;

    for (int i = 0; i<5; i++)
    {
        
        temp = *(score + i);
        total += temp;
        
    }

    printf("총합 : %d\n", total);

    return 0;
}