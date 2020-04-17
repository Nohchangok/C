#include <stdio.h>

//구구단 3단
int main(void){

int num = 1, i= 3;

    while(num <= 9){
        printf("%d * %d = %d\n", i, num, i*num);
        num++;
    }

    return 0;

}