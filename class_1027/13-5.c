// 레지스터 사용한 거
#include <stdio.h>

int main(void)
{
    register int i;
    int sum = 0;

    for (i = 0; i <= 10000; i++) {
        sum += i;
    }   

    printf("%d\n", sum);

    return 0;
}

// 레지스터 사용 안 한거 
// #include <stdio.h>

// int main(void)
// {
//     int i;
//     int sum = 0;

//     for (i = 0; i <= 10000; i++) {
//         sum += i;
//     }   

//     printf("%d\n", sum);

//     return 0;
// }