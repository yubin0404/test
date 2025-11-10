#include <stdio.h>

typedef struct
{

    char title[30];
    int price;

}Book;

int main(void)
{
    Book book = {};
    Book *pb = &book;

    printf("책 제목 입력 :");
    scanf("%s", pb->title);

    printf("책 가격 입력 :");
    scanf("%d", &(pb->price));

    int dis_price = pb->price + ((pb->price) * 0.1);
    printf("인상 된 책의 가격 :%d\n", dis_price);

    return 0;
}