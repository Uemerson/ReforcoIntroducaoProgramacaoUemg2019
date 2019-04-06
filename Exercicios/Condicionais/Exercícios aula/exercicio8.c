#include <stdio.h>

int main(){
    float salario;
    int profissao;

    printf("Entre com seu salario: ");
    scanf("%f", &salario);

    printf("Entre com a sua profissao (1 para caixa, 2 - para gerente e 3 - para diretor: ");
    scanf("%d", &profissao);

    if (salario < 1000 || profissao == 1){
        float novo_salario = salario + ((salario * 15) / 100);
        printf("O novo salario e: %.2f", novo_salario);
    }else if (salario >= 1000 && salario <= 1500 && profissao == 2){
        float novo_salario = salario + ((salario * 10) / 100);
        printf("O novo salario e: %.2f", novo_salario);
    }else if (salario >= 1500 && salario < 2000 && profissao == 2){
        float novo_salario = salario + ((salario * 10) / 100);
        printf("O novo salario e: %.2f", novo_salario);
    } else if (salario >= 2000 || profissao == 3){
        printf("Sem aumento");
    }
}
