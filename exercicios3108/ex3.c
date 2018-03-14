#include <stdio.h>

int main() {

	float num, inverso, absoluto;

	printf("Informe um número: \n");
	scanf("%f", &num);

	if (num > 0) {
		inverso = 1 / num;
		printf("Inverso: %.2f\n", inverso);
	} else {
		absoluto = num * -1;
		printf("Valor absoluto: %.2f\n", absoluto);
	}

	return 0;
}