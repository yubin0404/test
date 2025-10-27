#include <stdio.h>

// TODO: 배열 시작 주소와 크기를 인수로 받는 print_reverse 함수 정의
void print_reverse(int *start_ptr, int count) {
    // 1. 포인터를 '마지막 요소'의 주소로 설정합니다.
    // 힌트: 마지막 요소의 주소는 (시작 주소 + 크기 - 1)입니다.
    int *current_ptr = start_ptr + (count - 1); 

    printf("Reversed Array: ");
    
    // 2. 포인터를 역방향으로 순회합니다.
    // 힌트: 포인터가 시작 주소보다 작아지기 전까지 반복합니다.
    while (current_ptr >= start_ptr) {
        printf("%d ", *current_ptr); // 현재 포인터가 가리키는 값을 출력
        // TODO: 포인터를 이전 요소로 이동시키는 코드를 작성하세요.
        current_ptr--;
    }
    printf("\n");
}

int main(void) {
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(data[0]);

    // 함수 호출
    print_reverse(data, size); 

    // 출력 결과: 50 40 30 20 10 

    return 0;
}