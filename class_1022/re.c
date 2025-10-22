#include <stdio.h>

void sort(double arr[], int n) {

    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        
        for (j = i + 1; j < n; j++) {
        
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int find_min_index(double arr[], int n, double value,double j[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            int a;
            j[a] = i;
            a++;
            return i;   
        }
    }
    return -1; // 값이 없을 경우
}

int main(void){

    double dist[360];
    double before_sort[360] = {0,};
    int i, j, min_index = 0;
    double min_value[3];

    printf("360(degree) 라이다 거리값 입력\n");
    for (i = 0; i < 10 ;i++)
    {
        printf("%3d 거리(cm): ", i);
        scanf("%lf",&dist[i]);
    }

    for (int i =0; i < 10; i++){
        before_sort[i] = dist[i];
    }
    
    sort(dist, 10);

    find_min_index(before_sort, 10, dist[0],min_value);
    find_min_index(before_sort, 10, dist[1],min_value);
    find_min_index(before_sort, 10, dist[2],min_value);
    
    printf("\n[라이다 최소 거리 탐색 결과]\n");
    printf("가장 가까운 거리: %.1f cm, 방향: %.lf \n", dist[0], min_value[0]);
    printf("가장 가까운 거리: %.1f cm, 방향: %.lf \n", dist[1], min_value[1]);
    printf("가장 가까운 거리: %.1f cm, 방향: %.lf \n", dist[2], min_value[2]);
    
    //printf("장애물 방향 : %d\n", min_index);

    return 0;

}
