#include <stdio.h>

int main() {

	int i, qtdNum, num, maior, menor;

	printf("informe a quantidade de numeros\n");
	scanf("%d", &qtdNum);

	for (i=0; i<qtdNum; i++) {
		printf("informe um numero\n");
		scanf("%d", &num);

		if (i==0) {
			maior = num;
			menor = num;
		} else {
			if (num > maior) {
				maior = num;
			} else if (num < menor) {
				menor = num;
			}
		}
	}

	printf("maior = %d\nmenor = %d\n", maior, menor);
	return 0;
}