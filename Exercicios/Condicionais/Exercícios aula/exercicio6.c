#include <stdio.h>

int main(){

    float n1, n2;
    int opcao;

    printf("Entre com um numero: ");
    scanf("%f", &n1);
    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    printf("Escolha uma opcao abaixo");
    printf("\n1 - Para somar os numeros");
    printf("\n2 - Para subtrair os numeros");
    printf("\n3 - Para multiplicar os numeros");
    printf("\n4 - Para dividir os numeros");

    printf("\nSua opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("A soma dos numeros e: %.2f", n1+n2);
    }else if (opcao == 2){
        printf("A subtracao dos numeros e: %.2f", n1-n2);
    }else if (opcao == 3){
        printf("A multiplicacao dos numeros e: %.2f", n1*n2);
    }else if (opcao == 4){
        if (n2 != 0)
            printf("A divisao dos numeros e: %.2f", n1/n2);
        else
            printf("Nao e possivel dividir por zero!");
    }

    return 0;
}
