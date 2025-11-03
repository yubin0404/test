#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;

    int even = 0;
    int odd = 0;

    printf("5개의 정수 입력 : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;
    int *pe = &e;

    // a
    if (*pa % 2 == 0)
    {
        even += *pa;
    }
    else {
        odd += *pa;
    }

    // b
    if (*pb % 2 == 0)
    {
        even += *pb;
    }
    else {
        odd += *pb;
    }
    
    // c
    if (*pc % 2 == 0)
    {
        even += *pc;
    }
    else {
        odd += *pc;
    }

    // d
    if (*pd % 2 == 0)
    {
        even += *pd;
    }
    else {
        odd += *pd;
    }

    // e 
    if (*pe % 2 == 0)
    {
        even += *pe;
    }
    else {
        odd += *pe;
    }

    printf("짝수합 : %d, 홀수합 : %d\n", even, odd);

    return 0;

    
}