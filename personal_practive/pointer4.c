#include <stdio.h>

char string_copy(char *dest_ptr, char *src_ptr, int count)
{
    int i = 0;
    for (i = 0; i < count; i++){
        *(dest_ptr + i) = *(src_ptr + i);
    }

    return dest_ptr;
}
int main(void)
{
    char list = {"apple", "banana", "carrot", "berry"};
    char copy = {};
    



}