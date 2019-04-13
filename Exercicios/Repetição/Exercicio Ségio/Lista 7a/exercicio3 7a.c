#include <stdio.h>

int main(){

    int codigo_cidade, numero_veiculo, numero_acidente;
    int maior_indice_acidente, codigo_cidade_maior_indice_acidente;
    float media_veiculos, media_acidente_menos_2000_automoveis, total_veiculos, total_acidentes_menos_2000_automoveis;

    for (int i =0; i < 6; i++){
        printf("Entre com o codigo da cidade: ");
        scanf("%d", &codigo_cidade);

        printf("Numero de veiculos de passeio em 2017: ");
        scanf("%d", &numero_veiculo);
        printf("Numero de acidentes com vitimas em 2017: ");
        scanf("%d", &numero_acidente);

        if (numero_acidente > maior_indice_acidente){
            maior_indice_acidente = numero_acidente;
            codigo_cidade_maior_indice_acidente = codigo_cidade;
        }

        total_veiculos += numero_veiculo;

        if (numero_veiculo >= 2000)
            total_acidentes_menos_2000_automoveis += numero_veiculo;
    }

    printf("O maior indice de acidentes e %d na cidade com codigo %d\n", maior_indice_acidente, codigo_cidade_maior_indice_acidente);
    printf("Media de veiculos em todas cidades: %.2f\n", total_veiculos / 6);
    printf("Media de acidentes de transito em cidades com menos de 2000 automoveis de passeio: %.2f\n", total_acidentes_menos_2000_automoveis / 6);

    return 0;
}
