#include <stdio.h>

int main(){
    float investimento, investimento_corrigido;
    int opcao;

    printf("Entre com o investimento inicial: ");
    scanf("%f", &investimento);

    printf("Opcao 1: Poupanca\n");
    printf("Opcao 2: Fundos de renda fixa\n");
    printf("Entre com a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        investimento_corrigido = investimento + (investimento * 3 / 100);
        printf("Investimento corrigido apos um mes: %.2f", investimento_corrigido);
    } else if (opcao == 2){
        investimento_corrigido = investimento + (investimento * 4 / 100);
        printf("Investimento corrigido apos um mes: %.2f", investimento_corrigido);
    }

    return 0;
}
