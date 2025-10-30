#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 512

void remove_before (char *str, const char *target_substring)
{
    char *target_ptr = strstr(str, target_substring);
    if (target_ptr != NULL)
    {
        // target_substring이 발견된 지점부터 문자열을 덮어씁니다.
        strcpy(str, target_ptr);
    }
}

int main(void)
{
    FILE *fp_read;  // fast_log.txt 읽기용
    FILE *fp_write; // data.txt 쓰기용
    FILE *fp_data_read; // data.txt 다시 읽기용
    
    char str[MAX_LINE_LENGTH]; // 파일에서 읽어올 버퍼
    char ans[MAX_LINE_LENGTH]; // 사용자 입력 버퍼 (검색할 단어)
    
    int num = 0;   // 라인 수 (선택적)
    int pass = 0;  // 검색 및 쓰기 성공 횟수 (갯수)

    printf("검색할 단어(예: feb7)를 입력하세요. :");
    
    // ⭐ 중요: gets() 대신 안전한 fgets() 사용 및 개행 문자 제거
    if (fgets(ans, sizeof(ans), stdin) != NULL) {
        // fgets()로 입력받은 개행 문자(\n)를 널 문자(0)로 교체하여 정확한 검색을 가능하게 합니다.
        ans[strcspn(ans, "\n")] = 0; 
    } else {
        printf("입력 오류가 발생했습니다.\n");
        return 1;
    }

    // 1. fast_log.txt 열기 (읽기 모드)
    fp_read = fopen("fast_log.txt", "r");
    if (fp_read == NULL)
    {
        printf("파일이 없습니다: fast_log.txt\n");
        return 1;
    }

    // 2. data.txt 열기 (쓰기 모드)
    fp_write = fopen("data.txt", "w");
    if (fp_write == NULL)
    {
        printf("파일을 만들지 못 했습니다: data.txt\n");
        fclose(fp_read); // 읽기 파일도 닫아줍니다.
        return 1;
    }

    // --- 검색 및 쓰기 루틴 (기존 로직) ---
    // feof() 대신 fgets()의 반환값을 확인하는 것이 더 안전하고 권장되는 방법입니다.
    while(fgets(str, MAX_LINE_LENGTH, fp_read) != NULL)
    {
        num++;
        
        // 사용자가 입력한 검색 단어(ans)가 라인에 있으면
        if (strstr(str, ans) != NULL){

            // remove_before 함수를 호출하여 "{" 문자 앞의 내용을 제거
            remove_before(str, "{"); 
            
            // data.txt 파일에 쓰기
            fputs(str, fp_write);
            pass++;
        }
    }
    
    // 3. 파일 닫기 (읽기 및 쓰기)
    fclose(fp_read);
    fclose(fp_write); 
    
    printf("\n--- 검색 및 파일 쓰기 결과 ---\n");
    if (pass == 0) {
        printf("'%s' 문자열을 찾을 수 없었습니다.\n", ans);
    } else {
        printf("검색된 라인 수: **%d 개**\n", pass);
        printf("해당 라인들을 data.txt에 저장했습니다.\n");
    }
    printf("---------------------------\n");


    // 4. data.txt 파일을 다시 읽기 모드로 열기 (요청하신 추가 기능)
    printf("\n--- data.txt 파일 내용 확인 ---\n");
    
    fp_data_read = fopen("data.txt", "r"); 

    if (fp_data_read == NULL)
    {
        printf("data.txt 파일을 읽기 모드로 다시 열 수 없습니다.\n");
    } else {
        // 파일 내용을 한 줄씩 읽어와 화면에 출력
        // str 변수를 재사용합니다.
        while (fgets(str, MAX_LINE_LENGTH, fp_data_read) != NULL)
        {
            printf("%s", str); 
        }
        
        // 5. 다시 읽기 작업이 끝난 파일 포인터 닫기
        fclose(fp_data_read);
    }
    printf("------------------------------\n");

    return 0;
}