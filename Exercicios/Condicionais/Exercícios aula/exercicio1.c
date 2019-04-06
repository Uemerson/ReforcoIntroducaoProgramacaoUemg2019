#include <stdio.h>

int main(){

    float n1, n2;

    printf("Entre com um numero: ");
    scanf("%f", &n1);

    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("O numero %.2f e o maior!", n1);
    } else if (n1 < n2) {
        printf("O numero %.2f e o maior!", n2);
    } else {
        printf("Os numeros sao iguais!");
    }

    return 0;
}
