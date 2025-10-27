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
    int row_sum, colum_sum, total_sum;

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) 
        {
            row_sum += plot[i][j];
            colum_sum += plot[j][i];
            total_sum += plot[j][i];
        }

        plot[i][5] = row_sum;
        plot[4][i] = colum_sum;
        plot[4][5] = total_sum;

        row_sum = 0;
        colum_sum = 0;

    }
    for (i = 0; i < 5; i++) {

        for (j = 0; j < 6; j++) {
            printf("%5d",plot[i][j]);
        }
        printf("\n");
    }

}