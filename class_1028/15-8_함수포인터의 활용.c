#include <stdio.h>

void func(int (*fp)(int, int))
{
    int a, b;
    int res;
    printf("두 정수의 갑을 입력하세요 : ");
    scnaf("%d%d", &a,&b);
    res = fp(a,b);
    printd("결과값은 : %d\n", res);

}

int main(void){
    int sel;

    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1: func(sum); break;
    case 2: func(mul); break;
    case 3: func(max); break;
    }
    return 0;
}

int sum(int a, int b){
    return (a + b);
}


int mul(int a, int b){
    return (a * b);
}

int max(int a, int b){
    if (a > b) return a;
    else return b;
}

