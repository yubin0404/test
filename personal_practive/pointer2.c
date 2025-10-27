#include <stdio.h>

// TODO: 포인터와 배열 크기를 인수로 받는 calculate_sum 함수 정의
// 함수 정의: int calculate_sum(int *start_ptr, int count) { ... }

int calculate_sum(int *start_ptr, int count) {
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total = total + *(start_ptr + i );
    }
    
    return total;
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 배열 이름 (numbers)은 첫 요소의 주소 (int *)로 붕괴됩니다.
    int sum = calculate_sum(numbers, size); 

    printf("Sum of array: %d\n", sum); // 150이 출력되어야 함

    return 0;
}