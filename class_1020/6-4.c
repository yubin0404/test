#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i<5;i++) // i = 0,1,2,3,4
    {
        
        for(j=5;j-i>0;j--) // i가 0일 떄 -> j = 5,4,3,2,1 i가 1일 때 -> j = 5,4,3,2,1 ...
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}