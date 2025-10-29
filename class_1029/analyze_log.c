#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "started";
    
    FILE *fp;
    int ch;

    char saved_data[1000];
    int index = 0;
    int count = 0;
    char *ptr = NULL;

    fp = fopen("log.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 열지못했습니다.\n");
        return 1;
    }
    
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF){
            break;
        }

        saved_data[index] = (char)ch;
        index++;
    }
    saved_data[index] = '\0';
    
    fclose(fp);

    ptr = saved_data;

    while ((ptr = strstr(ptr, str)) != NULL)
    {
        count++;

        ptr += strlen(str);
    }


    //printf("%s\n", saved_data);
    printf("%d\n",count);

    return 0;
}