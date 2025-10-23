#include <stdio.h>

int main(void)
{
    int a;
    int *pa;

    pa = &a;
    *pa = 10;

    printf("포인터로 a 값 출력 : %d\n", *pa);
    printf("변수면으로 a 값 출력 : %d\n", a);

    return 0;
}