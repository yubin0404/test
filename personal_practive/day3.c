#include <stdio.h>

// 구조체랑 배열은 다르다.
typedef struct
{
    char name[20];
    int score;
}Student;

int main(void)
{
    Student student = {"kim", 85};
    Student *ps = &student;

    printf("이름 : %s, 점수 : %d\n", ps->name, ps->score);
    return 0;    

}