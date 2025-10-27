#include <stdio.h>

int main(void)
{
    char str[80] = "apple juice";
    char *ps = "banana";

    puts(str); // puts 함수는 문자열 출력 후 개행 문자 자동 추가
    fputs(ps, stdout); // stdout은 표준 출력 장치(모니터)로 다른 출력 장치로 변경 가능 ex) 파일 출력 fputs(ps, fp);
    puts("milk");

    return 0;
} 