#include <stdio.h>

int main(void)
{
    char small, cap = 'G';
    
    if ((cap >= 'z') && (cap <= 'Z'))
    {
        small = cap + ('a'-'A');
    }
}