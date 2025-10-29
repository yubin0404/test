// 정렬하고 함수로 만들어서 포인터로도 해보기

// 학생 5명의 국어, 영어, 수학 점수를 입력해 총점, 평균, 학점을 구하고 총점 순으로 정렬을 
// 출력합니다. 학점은 평균이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 그 외에는 F로 평가 합니다.
// 정렬하고 입력받는거로 수정하기

#include <stdio.h>

typedef struct 
{
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
    
    int total;
    double avg;
    char grade;
}info;

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

int main(void)
{   
    info students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("학번 :");
        scanf("%d", &students[i].num);

        printf("이름 : ");
        scanf("%s", students[i].name);

        printf("국어, 영어, 수학 점수 : ");
        scanf("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);
    }

    for (int i = 0; i < 5; i++) {
        students[i].total = students[i].kor + students[i].eng + students[i].math;
        students[i].avg = (double)students[i].total / 3;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            if(students[j].avg < students[j + 1].avg)
            {
                info temp = students[j + 1];
                students[j + 1]= students[j];
                students[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        students[i].grade = calculate_grade(students[i].avg);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d%10s%3d%3d%4d%4d%6.2f %c\n",
                students[i].num,
                students[i].name,
                students[i].kor,
                students[i].eng,
                students[i].math,
                students[i].total,
                students[i].avg,
                students[i].grade);
        }

    return 0;
}

