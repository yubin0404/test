#include <stdio.h>

typedef long long calculate_sum(const int *data, int size);

int main(void)
{
    int data_size = 0;
    int count = 0;

    printf("데이터 입력 갯수 :");
    scanf("%d", &data_size);
    
    int input_data[data_size];
    

    while (count < data_size)
    {
        printf("데이터 입력 :");
        scanf("%d", input_data[count]);
        count++;
    }

    int select_num = 0;

    printf("======= 선택 =======\n");
    printf("1. 총합 계산  2. 총곱 계산  3. 짝수 개수 세기\n");
    printf("번호 입력 :");
    scanf("%d", &select_num);

    if (select_num == 1)
    {
        sum(input_data, data_size);
    }




}