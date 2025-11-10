#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0 ; j < n - 1; j++) 
        {
            if ( *(arr + j) > *(arr + j + 1) )
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("정렬된 수: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(void)
{
    int arr[5];

    printf("숫자 입력 :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    sort(arr, 5);

    return 0;
}