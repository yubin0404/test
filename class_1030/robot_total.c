#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void)
{
    double m, Tm, G, eta, r, c, SF;
    int Nm;
    const double g = 9.81;

    printf("=========== 입  력 =============\n");

    printf("총 질량 : "); scanf("%lf",&m);
    printf("모터 정격 토크(Tm) : "); scanf("%lf",&Tm);
    printf("구동 모터 수 (Nm) :"); scanf("%d",&Nm);
    printf("감속비 (G) :"); scanf("%lf",&G);
    printf("구동 효율 (eta) : "); scanf("%lf",&eta);
    printf("바퀴 반지름 (r) :"); scanf("%lf",&r);
    printf("구름 게수 (c) :"); scanf("%lf",&c);
    printf("안전계수 (SF) :"); scanf("%lf",&SF);

    
}