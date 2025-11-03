#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("3개 정수 입력 : ");
    scanf("%d %d %d",&x,&y,&z);

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    int max = *px;

    if (*py > max)
    {
        max = *py;
    }
    else if (*pz > max)
    {
        max = *pz;
    }
   

    int min = *px;

    if (*py < min)
    {
        min = *py;
    }

    else if (*pz < min)
    {
        min = *pz;
    }
    

    printf("최대 : %d, 최소 : %d\n", max, min);

    return 0;
    
}