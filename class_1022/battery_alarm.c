#include <stdio.h>

int main(void){

    int N,i;
    double battery_level[100];
    int warning = 0; // 0 : off , 1 : on

    for (i = 0; i < 10; i++){
        printf("배터리 잔량 입력 : ");
        scanf("%lf",&battery_level[i]);
    }
    
    printf("\n배터리 히스테리시스 정보 결과\n");

    for (i = 0; i < 10; i++){

        if (warning == 0 && battery_level[i] <= 30){
            warning = 1;
            printf("배터리 경고: 잔량 %.1f%%\n", battery_level[i]);
        }
        else if (warning == 1 && 30 < battery_level[i] && battery_level[i] < 35){
            printf("배터리 경고: 잔량 %.1f%%\n", battery_level[i]);    

        }
        else if (warning == 1 && battery_level[i] >= 35){
            warning = 0;
            printf("배터리 정상: 잔량 %.1f%%\n", battery_level[i]);
        }
        else {
            printf("배터리 정상: 잔량 %.1f%%\n", battery_level[i]);
        }
    }



}