#include <stdio.h>

int main(void){

   int num = 10;

   //num�ּҸ� ptr1�ּҿ� ����.
   int * ptr1 = &num; 
   int * ptr2 = ptr1;

   printf("ptr1 ::: %d\n",ptr1);
   printf("ptr2 ::: %d\n",ptr2);

   (*ptr1)++;  // num++
   (*ptr2)++;  // num++

   printf("num ::: %d",num); //12

   return 0;
}