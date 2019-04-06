#include <stdio.h>

int main(){

    int idade;
    printf("Entre com a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Voce e maior de idade!");
    }else {
        printf("Voce e menor de idade!");
    }
}
