#include <stdio.h>

int sum_10(int count)
{
    int sum;
    if (count == 10) return 10;
    sum = count + sum_10(count + 1);

    return sum;
    
}

int main(void)
{
    int result = sum_10(1);

    printf("%d\n",result);

    return 0;
}


