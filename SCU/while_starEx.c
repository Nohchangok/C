#include <stdio.h>

int main(void){

    //º°Âï±â
    
    int i  = 1, j = 0;

    while(i <= 5)
    {
        
        while(j<i)
        {
            printf("*");
            j++;

        }
        printf("\n");
        j = 0;
        
        i++;
    }
    return 0;

}