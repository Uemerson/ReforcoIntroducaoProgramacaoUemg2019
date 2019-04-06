#include <stdio.h>

int main(){
    int i;
    float a, b, c;

    printf("Entre com um valor inteiro e positivo para I: ");
    scanf("%d", &i);

    printf("Entre com qualquer valor para A: ");
    scanf("%f", &a);
    printf("Entre com qualquer valor para B: ");
    scanf("%f", &b);
    printf("Entre com qualquer valor para C: ");
    scanf("%f", &c);

    if (i == 1){    //Ordem crescente
        if (a <= b && a <= c){
            if (b < c)
                printf("Ordem crescente: %.2f, %.2f, %.2f", a, b, c);
            else if (c < b)
                printf("Ordem crescente: %.2f, %.2f, %.2f", a, c, b);
            else
                printf("Ordem crescente: %.2f, %.2f, %.2f", a, b, c);
        } else if (b <= a && b <= c){
            if (a < c)
                printf("Ordem crescente: %.2f, %.2f, %.2f", b, a, c);
            else if (c < a)
                printf("Ordem crescente: %.2f, %.2f, %.2f", b, c, a);
            else
                printf("Ordem crescente: %.2f, %.2f, %.2f", b, a, c);
        } else if (c <= a && c <= b){
            if (a < b)
                printf("Ordem crescente: %.2f, %.2f, %.2f", c, a, b);
            else if (b < a)
                printf("Ordem crescente: %.2f, %.2f, %.2f", c, b, a);
            else
                printf("Ordem crescente: %.2f, %.2f, %.2f", c, a, b);
        }
    } else if (i == 2){    //Ordem decrescente
        if (a >= b && a >= c){
            if (b > c)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", a, b, c);
            else if (c > b)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", a, c, b);
            else
                printf("Ordem decrescente: %.2f, %.2f, %.2f", a, b, c);
        } else if (b >= a && b >= c){
            if (a > c)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", b, a, c);
            else if (c > a)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", b, c, a);
            else
                printf("Ordem decrescente: %.2f, %.2f, %.2f", b, a, c);
        } else if (c >= a && c >= b){
            if (a > b)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", c, a, b);
            else if (b > a)
                printf("Ordem decrescente: %.2f, %.2f, %.2f", c, b, a);
            else
                printf("Ordem decrescente: %.2f, %.2f, %.2f", c, a, b);
        }
    } else if (i == 3){   //O maior valor entre a, b, c fica entre os outros 2.
        if (a > b && a > c)
            printf("O maior valor entre a, b, c fica entre os outros 2: %.2f, %.2f, %.2f", b, a, c);
        else if (b > a && b > c)
            printf("O maior valor entre a, b, c fica entre os outros 2: %.2f, %.2f, %.2f", a, b, c);
        else if (c > a && c > b)
            printf("O maior valor entre a, b, c fica entre os outros 2: %.2f, %.2f, %.2f", a, c, b);
    }

    return 0;
}
