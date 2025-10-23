#include <stdio.h>

void adc_to_voltage(double adc[], double voltager[], int n, int Vref)
{
    for (int i = 0; i < n; i++)
    {
        voltager[i] = (adc[i]/ 1023) * Vref;
    }
   
}

void voltage_to_distance(double voltager[], double distance[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        distance[i] = k / voltager[i];
    }
    
}

// 아마도 배열 출력 해주는거
void print_array_double(double arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%.2f", arr[i]);
    }
    printf("\n");
}

// void adc_to_distance(double adc[], double voltager[], double distance[])

int main(void)
{
    int N;
    int Vref; // 기준 전압
    int k = 27;
    
    // 데이터 입력 부분
    printf("데이터 입력 개수 : ");
    scanf("%d", &N);

    double adc[N];
    for (int i = 0;i<N;i++)
    {
        printf("데이터 %d 입력 : ", i+1);
        scanf("%le", &adc[i]);
    }

    printf("기준 전압 입력 : ");
    scanf("%d", &Vref);

    printf("k : %d\n", k);


    // ----------------- 결과 출력 부분 ------------------
    printf("\nADC      : ");
    for (int i = 0;i<N;i++)
    {
        printf("%.0f      ", adc[i]);
    }
    
    // ---------- 전압 계산----------
    double voltager[N];

    adc_to_voltage(adc, voltager, N, Vref);
    printf("\n전압(V)  : ");
    for (int i = 0; i < N; i++)
    {    
        printf("%.2f     ", voltager[i]);
    }
    printf("\n");

    // ----------- 거리 계산 -----------
    double distance[N];

    voltage_to_distance(voltager, distance, N, k);
    printf("거리(cm) : ");
    for (int i = 0;i<N;i++)
    {
        printf("%.2f    ", distance[i]);
    }
    printf("\n");

    return 0;

}