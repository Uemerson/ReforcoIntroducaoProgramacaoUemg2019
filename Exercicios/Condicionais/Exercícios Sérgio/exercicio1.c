#include <stdio.h>

int main(){
    float a, b, c;

    printf("Entre com o lado do triangulo A: ");
    scanf("%f", &a);
    printf("Entre com o lado do triangulo B: ");
    scanf("%f", &b);
    printf("Entre com o lado do triangulo C: ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0){
        printf("Dados negativos! Finalizando o programa!");
    } else if (a <= b || a <= c){
        printf("O lado A deve ser maior que todos os outros!");
    } else if (a >= b + c){
        printf("Nenhum triangulo e formado!");
    } else if (a * a == b * b + c * c){
        printf("Triangulo retangulo!");
    } else if (a * a > b * b + c * c){
        printf("Triangulo obtusangulo!");
    } else if (a * a < b * b + c * c){
        printf("Triangulo acutangulo!");
    }

    return 0;
}
