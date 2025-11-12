#include <stdio.h>

typedef struct
{
    int id;
    int x;
    int y;
}Robot;

void cal_mean(Robot *data)
{
    Robot *pd = data;

    int x_total = 0;
    int y_total = 0;
    int x_mean = 0;
    int y_mean = 0;

    for (int i = 0; i < 3; i++)
    {
        x_total += (data+i)->x;
        y_total += (data+i)->y;
    }

    x_mean = x_total / 3;
    y_mean = y_total / 3;

    printf("x 좌표 평균 : %d\n", x_mean);
    printf("y 좌표 평균 : %d\n", y_mean);
    
}

int main(void)
{
    Robot input[3] = {};
    Robot *pd = input;
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d의 로봇 좌표 입력 :",i+1);
        scanf("%d %d %d", &(pd+i)->id, &(pd+i)->x,&(pd+i)->y);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d로봇 좌표 출력 : %d %d %d\n",j+1,(pd+j)->id, (pd+j)->x,(pd+j)->y);
    }

    cal_mean(pd);

    return 0;
}