/**
 * 주제: 로봇 주행 속도 데이터 분석 및 이벤트 카운트
 *
 * 1. 목표:
 * - 로봇(또는 자율주행 차량)의 속도 로그 데이터를 배열로 입력받아,
 * - 이웃한 시점 간의 속도 변화량을 계산한다.
 * - 급가속(Δv >= +10) 또는 급감속(Δv <= -10) 횟수를 계산한다.
 *
 * 2. 배경:
 * - 실제 이동 로봇이나 차량에서 수집한 속도 데이터를 분석하여 운행 안정성을 평가한다.
 * - 이 예제는 배열을 이용해 주행 데이터를 저장하고, 반복문으로 이웃한 값의 차이를 계산하며,
 * - 조건문으로 급가속/급감속 이벤트를 카운트하는,
 * - 즉, 배열을 이용한 "데이터 집합 분석"의 기초 예제이다.
 *
 * 3. 입력 조건:
 * - 주행 로그 개수: N (예: 10개)
 * - 각 값은 단위 시간당 속도(km/h)를 나타낸다.
 * - 예시 데이터: {0, 12, 18, 35, 28, 25, 15, 30, 42, 33} (총 10개)
 *
 * 4. 분석 조건:
 * - 급가속 이벤트: 현재 속도 - 이전 속도 >= 10
 * - 급감속 이벤트: 현재 속도 - 이전 속도 <= -10
 */

#include <stdio.h>
#include <stdlib.h> // 랜덤으로 받을때 
#include <time.h>

int main(void){

    int N, i;
    int speed[N];
    int accel_count = 0; // 급가속 카운트
    int decel_count = 0; // 급감속 카운트

    srand(time(NULL));
    
    N = rand() % 300 + 1;
    
    printf("%d\n",N);

    for (i = 1; i < N+1; i++) {

        speed[i] = rand() % 100 + 1;
        printf("정리 전 : %d\n", speed[i]);
        int diff = speed[i] - speed[i-1];

        if (diff >= 10) {
            speed[i] = speed[i-1] + rand() % 19 - 9;
        }

        else if (diff <= -10) {
            speed[i] = speed[i-1] + rand() % 10;
        }

        printf("정리 후 : %d\n\n", speed[i]);
    }
    
    for (i = 1; i < N+1; i++) {
        int diff = speed[i] - speed[i-1];
        if (diff >= 10) {
            printf(" + %d \n", speed[i]);
            accel_count++;
        }
        else if (diff <= -10) {
            printf(" - %d\n", speed[i]);
            decel_count++;
        }
    }

    printf("급가속 카운트 : %d\n급감속 카운트 : %d\n", accel_count, decel_count);

    return 0;
}