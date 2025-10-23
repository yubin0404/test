#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %p\n", &a);
    printf("double형 변수의 주소 : %p\n", &b);
    printf("char형 변수의 주소 : %p\n", &c);   // %p - > 16진수 표현, 주소는 16진수인데 그 이유는 편해서 사용

    return 0;    
}