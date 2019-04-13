#include <stdio.h>

int main(){
    int x, y, resultado = 1;

    printf("Entre com X: ");
    scanf("%d", &x);
    printf("Entre com y: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++){
        resultado = resultado * x;
    }

    printf("X elevado a Y e igual a: %d", resultado);

    return 0;
}
