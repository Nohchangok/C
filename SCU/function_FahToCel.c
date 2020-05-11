#include <stdio.h>

//¼·¾¾¸¦ È­¾¾·Î ¹Ù²Ù´Â ÇÔ¼ö.
double CelToFah(double c){
    return 1.8 * c + 32;
}

//È­¾¾´Â ¼·¾¾·Î ¹Ù²Ù´Â ÇÔ¼ö.
double FahToCel(double f){
    return (f-32)/1.8;
}

int main(void){
    
    int sel;
    double num;

    printf("1. ¼·¾¾ -> È­¾¾, 2. È­¾¾ -> ¼·¾¾\n");
    printf("¹øÈ£ ¼±ÅÃ : ");
    scanf("%d",&sel);

    if(sel == 1){
        printf("¼·¾¾ ÀÔ·Â : ");
        scanf("%lf",&num);
        printf("º¯È¯µÈ È­¾¾ : %.2lf\n", CelToFah(num));
        
    }else{
        printf("È­¾¾ ÀÔ·Â : ");
        scanf("%lf",&num);
        printf("º¯È¯µÈ ¼·¾¾ : %.2lf\n", FahToCel(num));
    }
    return 0;
}