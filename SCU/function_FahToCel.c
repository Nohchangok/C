#include <stdio.h>

//������ ȭ���� �ٲٴ� �Լ�.
double CelToFah(double c){
    return 1.8 * c + 32;
}

//ȭ���� ������ �ٲٴ� �Լ�.
double FahToCel(double f){
    return (f-32)/1.8;
}

int main(void){
    
    int sel;
    double num;

    printf("1. ���� -> ȭ��, 2. ȭ�� -> ����\n");
    printf("��ȣ ���� : ");
    scanf("%d",&sel);

    if(sel == 1){
        printf("���� �Է� : ");
        scanf("%lf",&num);
        printf("��ȯ�� ȭ�� : %.2lf\n", CelToFah(num));
        
    }else{
        printf("ȭ�� �Է� : ");
        scanf("%lf",&num);
        printf("��ȯ�� ���� : %.2lf\n", FahToCel(num));
    }
    return 0;
}