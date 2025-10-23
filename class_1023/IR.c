#include <stdio.h>

#define MAX_N 16

void classify_by_threshold(const int value[], int label[], int n, int threshold);
int count_black(const int label[], int n);  
int average_index_of_black(const int label[], int n);

int main(void)
{
    // 데이터 입력 부분
    int N; // 데이터 개수
    int threshold; // 임계값

    printf("데이터 입력 개수 : ");
    scanf("%d", &N);

    int data[N];
    int label[N];
    int i;
    for (i = 0;i < N;i++){
        printf("데이터 %d 입력 : ", i+1);
        scanf("%d", &data[i]);
    }

    // 임계값 입력 
    printf("임계값 입력   : ");
    scanf("%d", &threshold);

    classify_by_threshold(data, label, N, threshold);

    int black_count = count_black(label, N);

    // 라인 중심 위치 계산
    double center = average_index_of_black(label, N);

    // 결과 출력
    printf("\nlabel : ");
    for (i = 0; i < N; i++){    
        printf("%d    ", label[i]);
    }
    printf("\nblack count : %d\n", black_count);
    printf("index_avg : %.2f\n", center);

    return 0;

}

void classify_by_threshold(const int value[], int label[], int n, int threshold)
{
        for (int i = 0; i < n; i++){
            if (value[i] >= threshold)
            {
                label[i] = 0;
            }
            else 
            {
                label[i] = 1;
            }
         }
}
    
int count_black(const int label[], int n)
{
    int black_count = 0;
    for (int i = 0; i < n; i++){
        if (label[i] == 1){
            black_count++;
        }
    }
    return black_count;
}

int average_index_of_black(const int label[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++){
        sum += i * label[i];
    }
    int avg = sum / count_black(label, n);
    
    return avg;
}

