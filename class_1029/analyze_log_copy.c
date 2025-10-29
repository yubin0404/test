#include <stdio.h>
#include <string.h>

int main(void)
{
    // 찾는 문자열
    char str[] = "started";
    
    FILE *fp;
    int ch;

    char saved_data[1000];
    int index = 0;
    int count = 0; // 찾은 횟수를 저장할 변수
    char *ptr = NULL; // 문자열 검색을 위한 포인터

    fp = fopen("log.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 열지 못했습니다.\n");
        return 1;
    }

    // 1. 파일 내용을 saved_data에 읽어옴
    // (index < 1000 - 1 조건을 추가하여 버퍼 오버플로우를 방지하는 것이 안전합니다.)
    while (index < sizeof(saved_data) - 1 && (ch = fgetc(fp)) != EOF)
    {
        saved_data[index] = (char)ch;
        index++;
    }
    saved_data[index] = '\0';
    
    fclose(fp);

    // 2. saved_data에서 str ("started") 문자열 찾기 및 횟수 카운트
    
    // 검색 시작 포인터를 saved_data의 시작 주소로 초기화
    ptr = saved_data; 

    // ptr이 NULL이 될 때까지 (더 이상 문자열을 찾지 못할 때까지) 반복
    while ((ptr = strstr(ptr, str)) != NULL)
    {
        count++; // 찾았으면 카운트 증가
        
        // 다음 검색을 시작할 위치로 포인터를 이동시킵니다.
        // str의 길이만큼 이동시켜, 찾은 문자열 바로 다음부터 다시 검색합니다.
        ptr += strlen(str); 
    }

    // 3. 결과 출력
    printf("\n파일 내용 읽기 완료.\n");
    printf("찾는 문자열: \"%s\"\n", str);
    printf("--- 결과 ---\n");
    printf("'%s' 문자열은 파일에서 총 %d번 나타났습니다.\n", str, count);

    return 0;
}