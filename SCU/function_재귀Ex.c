#include <stdio.h>

int power(int m, int k){

    int i, p=1;

    for(i =0; i <k; i++){
        p *= m; 
    }

    return p;

}

//Àç±ÍÇÔ¼ö
int power2(int m, int k){
    //m ^ k = m * m ^(k-1)
    // m ^ k = m * power2(m, k-1)

    return(k == 0) ? 1 : m * power2(m, k-1);
}

int main(void){

    int m = 2, k, c;

    for(k = 0; k <= 9; k++){
        c = power2(m, k);
        printf("%d ^ %d = %d\n", m, k, c);
    }

    return 0;
}