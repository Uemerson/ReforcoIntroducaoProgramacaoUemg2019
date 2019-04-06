#include <stdio.h>

int main(){
    int hora_inicial, hora_final, minuto_inicial, minuto_final, hora_duracao, minuto_duracao;

    printf("Entre com a hora inicial: ");
    scanf("%d", &hora_inicial);
    printf("Entre com a minuto inicial: ");
    scanf("%d", &minuto_inicial);

    printf("Entre com a hora final: ");
    scanf("%d", &hora_final);
    printf("Entre com a minuto final: ");
    scanf("%d", &minuto_final);

    if (minuto_inicial > minuto_final){
        minuto_final = minuto_final + 60;
        hora_final = hora_final - 1;
    }

    if (hora_inicial > hora_final)
        hora_final = hora_final + 24;

    minuto_duracao = minuto_final - minuto_inicial;
    hora_duracao = hora_final - hora_inicial;

    printf("O jogo durou %d horas(s) e %d minuto(s)", hora_duracao, minuto_duracao);

    return 0;
}
