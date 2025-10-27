#include <stdio.h>
#include <string.h> // strlen 함수 사용을 위해 추가

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // 개행 문자 제거
    printf("입력한 문자열은 %s입니다.\n", str);

    return 0;

}