#include <stdio.h>

// TODO: 포인터를 인수로 받는 add_one 함수 정의
void add_one(int *num_ptr) {
    *num_ptr = *num_ptr + 1;
}

int main(void) {
    int score = 99;
    printf("Before: %d\n", score); // 99 출력

    // 함수에 score의 주소(&score)를 전달
    add_one(&score);

    printf("After: %d\n", score);  // 100 출력되어야 함

    return 0;
}