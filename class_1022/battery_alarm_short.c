#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int N,i;
    double battery_level[100];
    int warning = 0;

    srand(time(NULL));

    for (i = 0; i < 10; i++){
        battery_level[i] = rand() % 101;;
    }
    
    printf("\n*******배터리 히스테리시스 정보 결과*******\n");
        
    for (i = 0; i < 10; i++) {
        
        if (warning == 0 && battery_level[i] <= 30) {
            warning = 1;
            printf("1: 배터리 경고: 잔량 %.1f%%\n", battery_level[i]);
        }
        
        else if (warning == 1 && battery_level[i] >= 35) {
            warning = 0;
            printf("2: 배터리 정상: 잔량 %.1f%%\n", battery_level[i]);
        }
        else if (warning == 1) { 
            printf("3: 배터리 경고: 잔량 %.1f%%\n", battery_level[i]);
        }
        
        else {
            printf("4: 배터리 정상: 잔량 %.1f%%\n", battery_level[i]);
        }
    }
}