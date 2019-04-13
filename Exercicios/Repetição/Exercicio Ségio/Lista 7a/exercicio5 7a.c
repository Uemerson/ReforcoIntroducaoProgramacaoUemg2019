#include <stdio.h>

main() {
    int n = 10, a = 0, b = 1;

    for (int i = 0; i < n; i++){
        if (i == 0)
            printf("%d\n", a);
        else if (i == 1)
            printf("%d\n", b);
        else {
            int auxiliar = a + b;
            a = b;
            b = auxiliar;

            printf("%d\n", b);
        }
    }
}
