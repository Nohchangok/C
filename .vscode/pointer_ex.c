#include <stdio.h>

int main(void){

    int arr[3] ={1,2,3};
    int * ptr = &arr[0];

    printf("%d %d \n", arr[0], ptr[0]);

    return 0;
}