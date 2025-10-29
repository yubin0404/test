#include <stdio.h>

int main(void)
{
    int data_size = 0;
    int size_count = 0;
    int user_list[] = {};  

    printf("사용할 배열의 크기 값 입력 : ");
    scanf("%d", &data_size);
    
    printf("배열의 원소 입력 :");
    while (size_count < data_size)
    {
        scanf("%d ", &user_list[size_count]);
        printf("%d", user_list[size_count]);
        size_count++;
        //printf("%d", size_count);

    }

    return 0;
}