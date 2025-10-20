#include <stdio.h>

int main(void)
{
    int a = 1;

    do 
    {
        a = a * 2;

    } while(a<10); // 조건문이 참일 경우 위의 do문 실행, 조건문이 거짓이 될 경우 아래의 문장 실행
    printf("a :%d\n", a);

    return 0;

}