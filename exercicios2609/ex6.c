#include <stdio.h>

int main() {

    int num, qtdPrimos = 0, i, div;

    printf("Informe um numero\n");
    scanf("%d", &num);

    while(num > 0) {

        div = 0;

        for (i=1; i <= num; i++) {
            if ((num%i) == 0) {
                div++;
            }
        }

        if (div == 2) {
            printf("Número %d é primo.\n", num);
            qtdPrimos++;
        } else {
            printf("Número %d não é primo.\n", num);
                
        }

        printf("Informe um numero\n");
        scanf("%d", &num);

    }

    printf("Números primos identificados: %d\n", qtdPrimos);
    return 0;
}