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

    double Ttot = Nm * Tm * G * eta; // 총 구동 토크
    double Favail = Ttot / r; // 가용 견인력
    double mg = m * g;  // 

    double sin_theta = (Favail /SF - c * mg)/mg; // 
    if (sin_theta < 0.0) sin_theta = 0.0;
    if (sin_theta > 1.0) sin_theta = 1.0;
    
    double theta_rad = asin(sin_theta);
    double theta_deg = theta_rad * 180.0 / M_PI;
    double grade_pct = tan(theta_rad) * 100.0;
    
    
    // 결과 출력
    printf("\n[결과]\n");
    printf("총 구동 토크 T_tot : %.2f N·m\n", Ttot);
    printf("가용 견인력 F_avail : %.2f N\n", Favail);
    printf("등판 가능 최대각 : %.2f deg\n", theta_deg);
    printf("등판율(grade) : %.1f %%\n", grade_pct);
        
}