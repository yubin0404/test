#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pa = &a;

    *pa = 20;

    printf("a의 주소값 : %p\na의 값 : %d\n", &a, a);

    return 0;
}