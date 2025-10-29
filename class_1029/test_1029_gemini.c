#include <stdio.h>
#include <stdlib.h> // qsort 함수를 사용하기 위해 필요
#include <string.h> // 문자열 복사 (strncpy)를 사용하기 위해 필요

#define NUM_STUDENTS 5
#define MAX_NAME_LEN 20
#define NUM_SUBJECTS 3

// 학생 정보를 저장하기 위한 구조체 정의
typedef struct {
    char name[MAX_NAME_LEN];
    int kor;
    int eng;
    int math;
    
    int total;
    double avg;
    char grade;
} Student;

// 학점을 계산하는 함수
char calculate_grade(double avg) {
    if (avg >= 90.0) {
        return 'A';
    } else if (avg >= 80.0) {
        return 'B';
    } else if (avg >= 70.0) {
        return 'C';
    } else {
        return 'F';
    }
}

// 총점 순으로 내림차순 정렬을 위한 비교 함수 (qsort에서 사용)
// 총점이 같으면 이름 순으로 오름차순 정렬
int compare_students(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;

    // 1. 총점 내림차순 정렬 (총점이 높은 학생이 앞으로)
    if (studentB->total != studentA->total) {
        return studentB->total - studentA->total;
    }

    // 2. 총점이 같을 경우, 이름 오름차순 정렬
    return strcmp(studentA->name, studentB->name);
}

int main() {
    // 5명의 학생 정보 초기 데이터 (이미지에 나온 데이터와 유사하게 설정)
    Student students[NUM_STUDENTS] = {
        {"홍길동", 80, 75, 90},
        {"이순신", 88, 92, 100},
        {"유관순", 84, 70, 72},
        {"서하윤", 95, 99, 98},
        {"박신혜", 60, 65, 40}
    };

    // 1. 총점, 평균, 학점 계산
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].total = students[i].kor + students[i].eng + students[i].math;
        students[i].avg = (double)students[i].total / NUM_SUBJECTS;
        students[i].grade = calculate_grade(students[i].avg);
    }

    // 2. 총점 순으로 정렬 (내림차순)
    qsort(students, NUM_STUDENTS, sizeof(Student), compare_students);

    // 3. 결과 출력
    printf("============================================================\n");
    printf("이름      국어  영어  수학  총점  평균    학점\n");
    printf("============================================================\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-7s %-4d %-4d %-4d %-4d %-6.2f %c\n",
               students[i].name,
               students[i].kor,
               students[i].eng,
               students[i].math,
               students[i].total,
               students[i].avg,
               students[i].grade);
    }
    printf("============================================================\n");

    return 0;
}