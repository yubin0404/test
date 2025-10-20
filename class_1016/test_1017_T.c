// 교수님 답안

#include <stdio.h>

int main(void)
{
    double I_load, vel, R, V, C, eta, M;

    // 변수 데이터의 확인
    // 배터리 사양 및 환경정보 입력
    printf("평균전류 I_load : "); if (scanf("%lf", &I_load)!=1) return 1; // 참은 1. 거짓은 0 , 만약에 내가 받은 값이 참이 아니면 다시 돌아가
    printf("평균속도 vel : "); if (scanf("%lf", &vel)!=1) return 1;
    printf("예비율 R : "); if (scanf("%lf", &R)!=1) return 1;
    
    printf("공칭전압 V : "); if (scanf("%lf", &V)!=1) return 1;
    printf("용량 C : "); if (scanf("%lf", &C)!=1) return 1;
    printf("시스템 효율 eta: "); if (scanf("%lf", &eta)!=1) return 1;

    printf("모터 갯수 : "); if (scanf("%lf", &M)!=1) return 1;
    
    // 입력범위 검증
    if(V<=0 || C<=0 || I_load<=0 || vel<0 || R<0 || R<=0 || eta<=0 || eta>100 )
    {
        printf("입력값 범위를 확인하세요.\n");
        return 1;
    }

    // 소비전력
    const double P = (V * I_load) / eta;
    const double M_P = P * M;

    // 
    const double E_usable = V * C * eta * (1.0 -R);

    //
    const double t_h = E_usable / P;
    const double t_min = t_h * 60.0;

    //
    const double d_km = vel * t_h;

    //
    printf("소비전력 : %.2f\n", P);
    printf("소비전력 : %.2f\n", M_P);
    printf("사용 가능 에너지 E_usable : %.2f Wh\n", E_usable);
    printf("런타임 : %.2f h (%lf min)\n", t_h, t_min);
    printf("주행거리 : %.2f km\n", d_km);

    return 0;

}
