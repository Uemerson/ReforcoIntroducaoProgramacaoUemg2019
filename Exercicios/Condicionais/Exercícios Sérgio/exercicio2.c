#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Entre com X: ");
    scanf("%f", &x);

    if (x < 0){
        y = x;
    } else if (0 <= x && x <= 1){
        y = 1 / (1 - (pow(x, 2)));
    } else if (x > 1){
        y = (3 * (log(x))) + (pow(x, 2));
    }

    printf("Y e igual a %f", y);

    return 0;
}
