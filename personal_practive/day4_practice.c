#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
}Person;

int main(void)
{
    Person p[3] = {{"Kim", 20},{"Lee", 22},{"Park", 21}};
    Person *ptr = p;

    for (int i =0; i < 3; i++)
    {
        printf("%s의 나이 : %d\n", (ptr+i)->name, (ptr+i)->age);

    }
    return 0;

}