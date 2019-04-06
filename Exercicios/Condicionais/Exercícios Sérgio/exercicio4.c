#include <stdio.h>

int main(){

    int numero_funcionario;
    float salario_atual, salario_corrigido, indice_aumento;

    printf("Entre com o seu numero: ");
    scanf("%d", &numero_funcionario);

    printf("Entre com o seu salario atual: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 400)
        indice_aumento = 15;
    else if (salario_atual > 400 && salario_atual <= 700)
        indice_aumento = 12;
    else if (salario_atual > 700 && salario_atual <= 1000)
        indice_aumento = 10;
    else if (salario_atual > 1000 && salario_atual <= 1800)
        indice_aumento = 7;
    else if (salario_atual > 1800 && salario_atual <= 2500)
        indice_aumento = 4;
    else if (salario_atual > 2500)
        indice_aumento = 0;

    printf("\nNumero do funcionario: %d", numero_funcionario);
    printf("\nSalario atual: %.2f", salario_atual);
    printf("\nPercentual de aumento: %.2f", indice_aumento);

    salario_corrigido = salario_atual + (salario_atual * indice_aumento / 100);
    printf("\nSalario corrigido: %.2f", salario_corrigido);

    return 0;
}
