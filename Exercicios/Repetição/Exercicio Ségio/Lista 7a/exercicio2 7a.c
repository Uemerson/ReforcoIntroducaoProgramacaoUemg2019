#include <stdio.h>

int main(){
    int ano_contratado = 2012, ano_atual = 2019;
    float salario_atual = 600;
    float percentual_aumento = 1.5;

    for (int i = ano_contratado + 1; i <= ano_atual; i++){
        salario_atual = salario_atual + (salario_atual * percentual_aumento) / 100;
        printf("O salario atual em %d do funcionario e: %.2f, percentual de aumento %.2f\n", i, salario_atual, percentual_aumento);
        percentual_aumento *= 2;    //Dobra o percentual
    }

    //printf("O salario atual em 2019 do funcionario e: %.2f", salario_atual);

    return 0;
}
