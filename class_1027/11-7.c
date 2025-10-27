#include <stdio.h>

int main(void)
{
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num); // 100\n을 입력하면 100이 num에 저장되고, \n은 버퍼에 남아있음

    getchar(); // 버퍼 비우기/ 개행 문자 제거
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c\n", num, grade);

    return 0;
}