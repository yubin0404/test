#include <stdio.h>

int main(void){

    double dist[360];
    int i, min_index = 0;
    double min_value;

    printf("360(degree) 라이다 거리값 입력\n");
    for (i = 0; i < 10;i++)
    {
        printf("%3d 거리(cm): ", i);
        scanf("%lf",&dist[i]);
    }

    min_value = dist[0];
    for (i = 1; i < 10; i++)
    {
        if (dist[i] < min_value){
            min_value = dist[i];
            min_index = i;
        }
    }
    printf("\n[라이다 최소 거리 탐색 결과]\n");
    printf("가장 가까운 거리: %.1f cm\n", min_value);
    printf("장애물 방향 : %d\n", min_index);

    return 0;


}

// 가장 가까운 3개 출력