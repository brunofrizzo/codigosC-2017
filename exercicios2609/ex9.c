#include <stdio.h>
#include <math.h>

int main() {

	int inteiro, num;
	float raiz;

	printf("informe um numero\n");
	scanf("%d", &num);

	while (num > 0) {
		raiz = sqrt(num);
		inteiro = raiz;

		if (inteiro == raiz) {
			printf("Número %d é quadrado perfeito\n", num);
		} else {
			printf("Número %d não é quadrado perfeito.\n", num);
		}

		printf("informe um numero\n");
		scanf("%d", &num);
	}

	return 0;
}