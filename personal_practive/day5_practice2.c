#include <stdio.h>

typedef struct
{
    int x;
    int y;
}Position;

void move (Position *r, int len)
{
    r->x += len;
    r->y += len;
}

int main()
{
    char dice;
    int len;

    Position robot[2] = {};
    Position *pd = robot;

    printf("현재 로봇의 위치 :");
    scanf("%d %d", &(pd->x),&(pd->y));

    printf("방향 :");
    scanf("%s", &dice);

    printf("이동 거리 :");
    scanf("%d", &len);

    move(pd, len);
    printf("방향 및 이동 위치 : %c쪽 (%d, %d)\n", dice, pd->x, pd->y);

    return 0;
}