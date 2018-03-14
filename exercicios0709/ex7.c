#include <stdio.h>

int main() {

	int i;
	float a, b, c, maior, menor, meio;

	printf("Informe um valor inteiro e positivo (1,2 ou 3) e outros 3 valores reais.\n");
	scanf("%d %f %f %f", &i, &a, &b, &c);

	if ((a > b) && (a > c)) {
		maior = a;
		if (b > c) {
			meio = b;
			menor = c;
		} else {
			meio = c;
			menor = b;
		}
	} else if ((b > c) && (b > a)) {
		maior = b;
		if (a > c) {
			meio = a;
			menor = c;
		} else {
			meio = c;
			menor = a;
		}
	} else if ((c > a) && (c > b)) {
		maior = c;
		if (b > a) {
			meio = b;
			menor = a;
		} else {
			meio = a;
			menor = b;
		}
	}

	switch (i) {
		case 1: 
				printf("Ordem crescente: %.2f - %.2f - %.2f\n", menor, meio, maior);
				break;
		case 2: 
				printf("Ordem descrescente: %.2f - %.2f - %.2f\n", maior, meio, menor);
				break;
		case 3: 
				printf("Valores: %.2f - %.2f - %.2f\n", meio, maior, menor);
				break;
		default: printf("Números invalidos");
	}

	return 0;
}