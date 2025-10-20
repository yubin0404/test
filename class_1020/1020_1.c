#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;

    printf("실수 x입력 :");
    scanf("%lf", &x);
    printf("실수 y 입력 : ");
    scanf("%lf", &y);

    printf("\n[math.h] 함수 예제 \n");
    printf("sqrt(x) = %.4f\n", sqrt(x)); // 제곱근
    printf("pow(x,y) = %.4f\n",pow(x,y)); // 제곱
    printf("sin(x) = %.4f\n",sin(x)); // 
    printf("cos(x) = %.4f\n", cos(x));
    printf("log(x) = %.4f\n", log(x)); // 자연 log
    printf("fabs(x) = %.4f\n", fabs(x)); // 

    return 0;

}