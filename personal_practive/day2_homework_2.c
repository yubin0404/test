#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("정렬된 수: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main(void)
{
    int arr[5];

    printf("숫자 입력 :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, 5);

    return 0;
    
}