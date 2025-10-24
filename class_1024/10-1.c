#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10; // 간접참조연산자
    *(ary +1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);

    //for ()


}