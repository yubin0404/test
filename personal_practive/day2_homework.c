#include <stdio.h>

int mean_score(int *score)
{
    int total = 0;
    int mean = 0;

    for (int i = 0; i < 5; i++)
    {
        total += score[i];
    }
    mean = total / 5;
}

int main(void)
{
    int score[5];
    int count = 0;

    printf("5명의 학생 점수를 입력 : ");
    while(count <5)
    {
        scanf("%d", &score[count]);
        count++;
    }

    printf("점수의 평균값 : %d\n", mean_score(score));

    return 0;
}