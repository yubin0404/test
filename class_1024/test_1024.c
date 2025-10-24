#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
    double max, mid, min;

    printf("실수값 3개 입력 : ");
    scanf("%lf %lf %lf", &max, &mid, &min);

    line_up(&max, &mid, &min);
    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

}

void line_up(double *maxp, double *midp, double *minp)
{
    if (*minp > *midp)
    {
        swap(midp, minp); // midp랑 minp는 이미 주소값을 가지고있어서 &를 안써도됩
    }

    if (*midp > *maxp)
    {
        swap(maxp, midp);
    }
}


// 처음에는 값을 배열에 넣고 싶었음
// void line_up(double *maxp, double *midp, double *minp)
// {
//     double num[3] = {*maxp, *midp , *minp};
    
//     for (int i = 0; i < 3; i++)
//     {
//         if (num[i+1] >  num [i])
//         {
//             swap(num[i+1], num[i]);
//         }
//     } 

// }