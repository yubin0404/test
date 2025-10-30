#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 512
#define LENGTH 4

void remove_before (char *str, const char *target_substring)
{
    char *target_ptr = strstr(str, target_substring);
    if (target_ptr != NULL)
    {
        strcpy(str, target_ptr);
    }
}

int main(void)
{
    FILE *fp;
    FILE *fpw;
    char str[300], ans[300];
    int num = 0, pass = 0;

    printf("검색할 단어를 입력하세요. :");
    gets(ans);

    fp = fopen("fast_log.txt", "r");
    fpw = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("파일이 없습니다.");
        return 1;
    }

    if (fpw == NULL)
    {
        printf("파일을 만들지 못 했습니다.");
        return 1;
    }

    while(!feof(fp))
    {
        num++;
        fgets(str, 300, fp);

        if (strstr(str,ans) != NULL){

            remove_before(str, "{");
            // printf("%s",str);
            fputs(str, fpw);
            pass++;
        }
    }
    if (pass == 0) printf("문자열을 찾을 수 없습니다.\n");
    fclose(fpw);

    FILE *fpc; // Count File Pointer
    char count_str[300];
    int feb7_count = 0;
    int fe8a_count = 0;

    fpc = fopen("data.txt", "r");
    if (fpc == NULL) {
        printf("data.txt 파일을 열 수 없습니다.\n");
        // 이전 fpw 닫는 작업은 이미 했으므로 이대로 종료
        fclose(fp); // 원래 fast_log.txt 파일 포인터는 여기서 닫아줘야 함.
        return 1;
    }

    // 파일 끝까지 읽으면서 문자열 카운트
    while(fgets(count_str, 300, fpc) != NULL)
    {
        if (strstr(count_str, "feb7") != NULL) {
            feb7_count++;
        }
        if (strstr(count_str, "fe8a") != NULL) {
            fe8a_count++;
        }
    }
    
    // 결과 출력
    printf("\n--- 카운트 결과 ---\n");
    printf("feb7이 포함된 행의 개수: %d\n", feb7_count);
    printf("fe8a가 포함된 행의 개수: %d\n", fe8a_count);

    fclose(fpc);
    // --- 추가된 계산 로직 끝 ---

    // 원본 코드에서 오류가 있었던 부분 수정 (fpw 변수 재선언 및 fpw 닫기)
    // 원래 코드는 아래와 같았으나, 위에서 fpc로 변경하고 fclose(fpc)로 대체함.
    /*
    FILE *fpw = fopen("data.txt","r"); // fpw를 다시 선언하는 것은 좋지 않음
    
    fclose(fp);
    fclose(fpw);
    */
    
    // 원본 코드에서 닫히지 않았던 fp (fast_log.txt)는 위에 fpc가 NULL일 때 닫아주었고,
    // fpc가 정상일 때는 fpc를 닫기 전에 fp를 닫아주지 않았으므로 여기에 추가
    fclose(fp); // fast_log.txt 닫기

    return 0;
}
    