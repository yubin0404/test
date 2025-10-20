#include <stdio.h>

int main(void)
{
    
    double m, SF, DM, R, T, G, W;

    double min_F, motor_F;
    int N;
    const double c = 0.018;
    const double g = 9.81;

    // 총 하중 m
    printf("총 하중 : ");
    scanf("%lf", &m);
    // 
    printf("구동 바퀴 수 : ");
    scanf("%d", &N);
    
    printf("모터 정격 토크 : ");
    scanf("%lf", &T);
    
    printf("감속비 : ");
    scanf("%lf", &G);

    printf("바퀴 반지름 : ");
    scanf("%lf", &g);

    printf("안전 계수 : ");
    scanf("%lf", &SF);

    printf("설계 마진: ");
    scanf("%lf", &DM);

    // 중량
    W = m * g;
    
    // 필요한 최소 견인력
    min_F = c * W * SF * DM;

    motor_F = (T * G / R) * N;

    printf("필요한 최소 견인력 : %lf\n", min_F);
    printf("모터가 낼 수 있는 견인력 : %lf\n", motor_F);

    if (min_F <= motor_F)
    {
        printf("더 큰 모터나 감속비가 필요합니다.\n");
    }
    else
    {
        printf("적절한 모터와 감속비 입니다.\n");
    }

    return 0;
}
