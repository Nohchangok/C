#include <stdio.h>

int main(void){
    
    int i  = 9;

    printf("7단 구구단 역순 출력\n");

    while(i >= 1)
    {
        printf("7 * %d = %d\n", i, 7*i);
        i--;
    }
    return 0;

}