#include <stdio.h>

int main(){

    float num, fatorial = 1;
    printf("Entre com um numero: ");
    scanf("%f", &num);

    for (int i = num; i >= 1; i--){
        fatorial *= i;
    }

    printf("O fatorial de %.2f e igual a %.2f", num, fatorial);
    return 0;
}
