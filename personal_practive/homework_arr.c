#include <stdio.h>

int main(void)
{
    int input[5];
    int count = 0;
    int even = 0;
    int odd = 0;

    printf("다섯 개의 정수 입력 : ");
    while(count<5)
    {
        scanf("%d", &input[count]);
        count++;
    }

    for (int i = 0; i < 5; i++)
    {
        if (input[i] % 2 == 0)
        {
            even += input[i];
        }
        else
        {
            odd += input[i];
        }
    }

    printf("짝수합 : %d, 홀수합 : %d\n", even , odd);

    return 0;

}