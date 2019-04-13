#include <stdio.h>

int main() {

    int soma;

    for (int i = 0; i < 50; i++){
        if ((i+1) % 2 == 0){
            soma += i + 1;
        }
    }

    printf("A soma dos cinquentas primeiros numeros e igual a : %d", soma);

    return 0;
}
