#include <stdio.h>

int main(void)
{
    int l_load = 8; //평균전류
    float vel = 6.4;
    float R = 0.1;
    int V = 24; //공칭전압
    int C = 60; //용량
    float eta = 0.95;

    float Wh, W, h, km;
    
    Wh = V * C * eta * (1 - R);

    W = V * l_load / eta;
    
    h = Wh / W;

    km = vel * h;
    printf("[결과]\n");
    printf("사용 가능 에너지 : %f Wh\n", Wh);
    printf("런타임 : %f h\n", h);
    printf("주행거리 d : %f km\n", km);

    return 0;
}
