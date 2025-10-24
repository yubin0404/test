#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = { 10, 20, 30, 40, 50 };
    int ary2[7] = {10,20,30,40,50,60,70};
    
    int len1;
    int len2;

    len1 = sizeof(ary1) / 4;
    // len1 = sizeof(ary1) / sizeof( ary1[0] );
    print_ary(ary1, len1);
    printf("\n");

    len2 = sizeof(ary2) / 4;
    print_ary(ary2, len2);
    printf("\n");

    return 0;

}

void print_ary(int *pa,int size)
{
    int i;

    for ( i = 0;i < size; i++ )
    {
        printf("%d ", pa[i]);
    }
}



