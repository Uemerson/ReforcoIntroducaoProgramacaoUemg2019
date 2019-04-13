#include <stdio.h>

int main() {

    float altura, maior_altura, menor_altura = 0, media_altura_mulheres, total_altura_mulheres;
    int total_homens = 0, total_mulheres = 0;
    char sexo, sexo_pessoa_mais_alta;

    for (int i = 0; i<15; i++){
        printf("Entre com a altura: ");
        scanf("%f", &altura);
        printf("Entre com o sexo (F ou M): ");
        scanf(" %c", &sexo);

        if (altura > maior_altura){
            maior_altura = altura;
            sexo_pessoa_mais_alta = sexo;
        }

        if (menor_altura == 0 || altura < menor_altura){
            menor_altura = altura;
        }

        if (sexo == 'F'){
            total_altura_mulheres += altura;
            total_mulheres++;
        } else if (sexo == 'M')
            total_homens++;
    }

    media_altura_mulheres = total_altura_mulheres / total_mulheres;

    printf("A maior altura e: %.2f\n", maior_altura);
    printf("A menor altura e: %.2f\n", menor_altura);
    printf("A media da altura das mulheres: %.2f\n", media_altura_mulheres);
    printf("O numero de homens e: %d\n", total_homens);
    printf("O sexo da pessoa mais alta e: %c\n", sexo_pessoa_mais_alta);

    return 0;
}
