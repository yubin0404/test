#include <stdio.h>

int main(void)
{
    int a = 10;

    if (a > 5)
    {
        if (a == 6)
        {
            printf("육");
        }
        else if (a == 7)
        {
            printf("칠");
        }
        else if (a == 8)
        {
            printf("팔");
        }
        else if (a == 9)
        {
            printf("구");
        }
        else
        {
            printf("십");
        }
    }
    else
    {
        if (a == 1)
        {
            printf("일");
        }
        else if (a == 2)
        {
            printf("이");
        }
        else if (a == 3)
        {
            printf("삼");
        }
        else if (a == 4)
        {
            printf("사");
        }
        else
        {
            printf("오");
        }
    }

}