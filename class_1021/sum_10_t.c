#include <stdio.h>

int sum(int n)
{
    int res;
    if (n==1) return 1;
    res = n + sum(n-1);

    return res;
}

int main(void)
{
    int result = sum(10);

    printf("%d\n",result);

    return 0;

}