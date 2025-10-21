#include <stdio.h>

int main(void){

    int score[5];
    int i;
    int total = 0;
    int count;
    
    // 배열의 요소 갯수 계산하기
    count = sizeof(score) / sizeof(score[0]); // sizeof(score) -> 20bytes / sizeof(score[0]) -> 4bytes

    // 배열의 값 입력
    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    //배열의 값의 합
    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    
    double avg = total/(double)count; // 나 계산할 때 count를 double로 받을거야 -> 정수 나눗셈보다 실수 나눗셈이 더 정확함 
                                      // float로 받아도되지만 double이 표현 범위가 더 넓어서 정확함
    // 출력
    for (i = 0; i < count; i++)
    {
        printf("%5d",score[i]); // %5d 5칸에 맞춰서 숫자를 넣어라 -> 공백이 생김
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}
