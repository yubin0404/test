#include <stdio.h>
#include <string.h>

#define MAX_LINE_SIZE 30
#define TARGET_STRING "started"

int main(void)
{
    char str[] = TARGET_STRING;
    
    FILE *fp;
    char saved_data[MAX_LINE_SIZE];
    
    int count = 0;
    char *ptr = NULL;
    size_t len = strlen(str);

    fp = fopen("log.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "파일을 열지 못했습니다.\n");
        return 1;
    }
    
    while (fgets(saved_data, MAX_LINE_SIZE, fp) != NULL)
    {
        ptr = saved_data;
        
        while ((ptr = strstr(ptr, str)) != NULL) // strstr은 참이면 주소값을 반환 // 
        {
            count++;
            ptr += len;
        }
    }
    
    fclose(fp);

    printf("'%s' 문자열은 총 %d번 나타났습니다.\n", str, count);

    return 0;
}