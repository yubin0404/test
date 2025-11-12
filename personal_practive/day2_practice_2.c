#include <stdio.h>

typedef struct
{
    int id;
    int x;
    int y;
}Robot;

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

    return 0;
}