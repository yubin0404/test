#include <stdio.h>

int main(void)
{
    int plot[5][6] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    int i,j;
    int sum = 0;

    // 행 합 저장
    for (i = 0; i < 4; i++) {

        for (j = 0; j < 5; j++) {
            sum += plot[i][j];
        }

        plot[i][5] = sum; // 각 행의 합을 마지막 열에 저장
        sum = 0;
    }

    // 열의 합 저장
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum += plot[j][i];
        }
        plot[4][i] = sum;
        sum = 0;
    }
    //전체 값 합
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum += plot[j][i];
        }
        plot[4][5] = sum;
    }

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 6; j++) {
            printf("%5d",plot[i][j]);
        }
        printf("\n");
    }


        



}