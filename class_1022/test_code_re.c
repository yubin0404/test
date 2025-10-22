// 10번 이상씩 +,- 값 유지하기
#include <stdio.h>
#include <stdlib.h> // 랜덤으로 받을때 
#include <time.h>

int main(void){

    int N, i;
    int speed[N];
    int accel_count = 0; // 급가속 카운트
    int decel_count = 0; // 급감속 카운

    srand(time(NULL));

    printf("반복 횟수 : ");
    scanf("%d", &N);

    for (i = 1; i < N+1; i++) {

        speed[i] = speed[i-1] + rand() % 19 - 9; // -9 ~ 9
        printf("%d 정리 전 : %d\n", i, speed[i]);
    }
    
    for (i = 1; i < N+1 ; i++){

        int value = speed[i] * speed[i-1];
        if (value < 0 || i / 10 < 0){
            speed[i] = speed[i-1] + rand() % 10;
        }
        printf("%d\n", speed[i]);
    }

    printf("급가속 카운트 : %d\n급감속 카운트 : %d\n", accel_count, decel_count);

    return 0;
}