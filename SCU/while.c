#include <stdio.h>

int main(void){
    
    int num = 0;

    while(num <=3){

        printf("%d : hello world!\n", num);
        num++;
    }
    //한줄로 작성시 중괄호 생략가능함.
    //while(num <=3) printf("%d : hello world!\n", num++);
    return 0;
}