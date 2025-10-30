#include <stdio.h>

void find_max_value(int *list,int num)
{
    int max = list[0];
    //printf("%d",list[0]);
    for (int i = 0;i < num; i++){
        if ( max < list[i] )
        {
            max = list[i];
        }
    }
    printf("가장 큰 값은 %d입니다.\n", max);
}

void find_min_value(int *list,int num)
{
    int min = list[0];
    //printf("%d",list[0]);
    for (int i = 0;i < num; i++){
        if ( min > list[i] )
        {
            min = list[i];
        }
    }
    printf("가장 작은 값은 %d입니다.\n", min);
}

int main(void)
{
    int data_size = 0;
    int size_count = 0;

    printf("사용할 배열의 크기 값 입력 : ");
    scanf("%d", &data_size);

    int user_list[data_size];

    printf("배열의 원소 입력 :");
    while (size_count < data_size)
    {
        scanf("%d", &user_list[size_count]);
        //printf("%d", user_list[size_count]);
        size_count++;
    }
    
    int menu;

    printf("최대값 계산(1) ,최소값 계산(0) :");
    scanf("%d",&menu);
    if (menu == 1)
    {
        find_max_value(user_list,data_size);
    }
    else if (menu == 0)
    {
        find_min_value(user_list, data_size);
    }
    else 
    {
        printf("잘못입력");
    }
    
    return 0;
}