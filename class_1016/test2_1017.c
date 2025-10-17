#include <stdio.h>

int main(void)
{
    int l_load = 8; //평균전류
    float vel = 6.4; // 평균속도
    float R = 0.1; // 예비율
    int V = 48; //공칭전압
    int C = 80; //용량
    float eta = 0.95; // 시스템 효율

    float Wh, W, h, km; 

    // 계산식

    Wh = V * C * eta * (1 - R);

    W = V * l_load / eta;
    
    h = Wh / W;

    km = vel * h;

    // 출력물

    printf("------------사전 선정 정보---------------\n");
    printf("평균전류 l_load [A] : %d\n", l_load);
    printf("평균속도 vel [km/h] : %g\n", vel);  // %g는 소수점 아래 0은 다 빼기
    printf("예비율 R : %g\n", R);  

    printf("---------------배터리 정보---------------\n");
    printf("공칭전압 V [V]: %d\n", V);
    printf("용량 C [Ah]: %d\n", C);
    printf("시스템 효율 eta : %g\n", eta);
    
    printf("-----------[결과]----------\n");
    printf("사용 가능 에너지 : %.2f Wh\n", Wh);
    printf("런타임 : %.2f h\n", h);
    printf("주행거리 d : %.2f km\n", km);

    return 0;
}
