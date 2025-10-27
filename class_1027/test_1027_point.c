// 이해못함

#include <stdio.h>

int main(void)
{
    int plot[5][6] = {0};  // 배열 전체를 0으로 초기화

    int i, j;
    int num = 1;           // 1부터 채울 숫자
    int row_sum = 0, col_sum = 0, total_sum = 0;

    int *p = &plot[0][0];  // 2차원 배열 시작 주소

    // 1부터 20까지 4행 5열에 채우기
    for (i = 0; i < 4; i++) {       // 0~3행
        for (j = 0; j < 5; j++) {   // 0~4열
            *(p + i*6 + j) = num++; // 저 이상한 식으로 1부터 20까지 만들기
        }
    }

    // 각 행의 합 계산
    for (i = 0; i < 4; i++) {
        row_sum = 0;
        for (j = 0; j < 5; j++) {
            row_sum += *(p + i*6 + j); 
        }
        *(p + i*6 + 5) = row_sum;   // 각 행 마지막 칸에 행 합 저장
        total_sum += row_sum;       // 전체 합에 누적
    }

    // 각 열의 합 계산
    for (j = 0; j < 5; j++) {
        col_sum = 0;
        for (i = 0; i < 4; i++) {
            col_sum += *(p + i*6 + j);
        }
        *(p + 4*6 + j) = col_sum;   // 마지막 행에 열 합 저장
    }

    // 전체 합 마지막 칸에 저장
    *(p + 4*6 + 5) = total_sum;

    // 결과 출력
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%5d", *(p + i*6 + j));
        }
        printf("\n");
    }

    return 0;
}
