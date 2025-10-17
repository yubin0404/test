#include <stdio.h>

int main(void){

    unsigned int a;  // unsigned는 양수만을 저장

    a = 4294967295;  
    printf("%d\n",a); 

    a = -1;
    printf("%u\n", a); // 

    return 0;
}