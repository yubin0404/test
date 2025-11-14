#include <stdio.h>

typedef struct
{
    int x;
    int y;
}Position;

void move (Position *r, int dx, int dy)
{
    r->x += dx;
    r->y += dy;
}

int main()
{
    Position robot = {0, 0};
    move(&robot, 3, 7);
    printf("위치 : (%d, %d)\n", robot.x, robot.y);

    return 0;
}