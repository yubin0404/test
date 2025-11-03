#include <stdio.h>

void sum_of_even_odd(int *list)
{
    int even = 0;
    int odd = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (list[i] % 2 == 0)
        {
            even += list[i];
        }
        else
        {
            odd += list[i];
        }
    }
    printf("짝수합 : %d, 홀수합 : %d\n", even , odd);
}

int main(void)
{
    int input[5];
    int count = 0;

    printf("다섯 개의 정수 입력 : ");
    while(count<5)
    {
        scanf("%d", &input[count]);
        count++;
    }

    sum_of_even_odd(input);

    return 0;

}