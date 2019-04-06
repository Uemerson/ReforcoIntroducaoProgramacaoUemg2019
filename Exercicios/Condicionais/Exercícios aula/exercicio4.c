#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Entre com o numero 1: ");
    scanf("%f", &n1);

    printf("Entre com o numero 2: ");
    scanf("%f", &n2);

    printf("Entre com o numero 3: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3){
        printf("O maior numero e: %.2f", n1);
    } else if (n2 > n1 && n2 > n3){
        printf("O maior numero e: %.2f", n2);
    } else if (n3 > n1 && n3 > n2){
        printf("O maior numero e: %.2f", n3);
    } else {
        printf("Os numeros sao iguais!");
    }

    return 0;
}
