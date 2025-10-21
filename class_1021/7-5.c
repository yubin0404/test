#include <stdio.h>

void fruit(void)
{
    printf("apple\n");
    fruit();
}

int main(void)
{
    fruit();

    return 0;
}