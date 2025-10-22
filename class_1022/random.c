#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL)); // 랜덤 초기화

    int r1 = rand() % 10; // 0 ~ 9
    int r2 = rand() % 100 + 1; // 1 ~ 100
    int r3 = rand() % 21 - 10; // -10 ~ 10

    printf("0~9 사이의 랜덤 정수: %d\n", r1);
    printf("1~100 사이의 랜덤 정수: %d\n", r2);
    printf("-10~10 사이의 랜덤 정수: %d\n", r3); 

    return 0;
}