#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Entre com a nota 1: ");
    scanf("%f", &nota1);
    printf("Entre com a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 5){
        printf("Sua media foi %.2f e voce foi reprovado!", media);
    }else if (media >= 5 && media <= 7){
        printf("Sua media foi %.2f e voce esta de exame!", media);
    }else if (media > 7){
        printf("Sua media foi %.2f e voce foi aprovado!", media);
    }

}
