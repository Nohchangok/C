#include <stdio.h>

//�Ǻ���ġ ���� 
// 0 1 1 2 3 5 8 13 ...
void Fibo(int num){
    int f1 = 0, f2 =1, f3;
    int i;

    printf("%d %d", f1, f2);

    for(i = 3; i<=num; i++){
        f3 = f1 + f2;
        printf("%d",f3);
        f1 = f2;
        f2 = f3;
    }

}

int main(void){
    int n;
    printf("����ϰ��� �ϴ� �Ǻ���ġ ���� ���� : ");

    scanf("%d", &n);
    Fibo(n);

    return 0;
}