#include <stdio.h>

int main() {

	int num, i, qtdPar = 0, qtdImpar = 0, somatorio = 0;
	float media = 0;

	for (i=0;i<200;i++) {
		printf("informe um numero\n");
		scanf("%d", &num);

		if (num%2==0) {
			qtdPar++;
			media = media + num;
		} else if (num%2==1) {
			qtdImpar++;
			somatorio = somatorio + num;
		}
	}

	printf("Media dos pares: %.2f\nSomatorio dos impares: %d\n", media/qtdPar, somatorio);
	return 0;

}