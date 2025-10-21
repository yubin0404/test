#include <stdio.h>

int main(void){

    double dist[360];
    int i, j, min_index = 0;
    double min_value[3];

    printf("360(degree) 라이다 거리값 입력\n");
    for (i = 0; i < 10;i++)
    {
        printf("%3d 거리(cm): ", i);
        scanf("%lf",&dist[i]);
    }
    
    for (i = 0; i <4; i++){
        min_value[i] = dist[0];
        for (j = 1; j < 10; j++)
        {
            if (dist[j] < min_value[i]){
                min_value[i] = dist[j];
                min_index = j;
            }
        }
    }
    printf("\n[라이다 최소 거리 탐색 결과]\n");
    printf("가장 가까운 거리: %.1f cm\n", min_value[0]);
    printf("가장 가까운 거리: %.1f cm\n", min_value[1]);
    printf("가장 가까운 거리: %.1f cm\n", min_value[2]);
    
    printf("장애물 방향 : %d\n", min_index);

    return 0;


}

// 가장 가까운 3개 출력