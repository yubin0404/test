#include <stdio.h>

int main(void){

    int score[5];
    int i;
    int total = 0;
    

    // 배열의 값 입력
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    //배열의 값의 합
    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    
    double avg = total/5.0;
    
    // 출력
    for (i = 0; i < 5; i++)
    {
        printf("%5d",score[i]); // %5d 5칸에 맞춰서 숫자를 넣어라 -> 공백이 생김
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}