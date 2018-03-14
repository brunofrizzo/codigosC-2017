#include <stdio.h>

int main() {

	int limiteSup, limiteInf, decremento, i; 
	float limiteSupFahrenheit, tempF;

	printf("informe o limite superior, o inferior e o decremento\n");
	scanf("%d %d %d", &limiteSup, &limiteInf, &decremento);

	limiteSupFahrenheit = (9*limiteSup/5) + 32;

	for (i=limiteSup; i>=limiteInf; i=i-decremento) {
		tempF = (9*i/5) + 32;
		printf("%d || %.2f\n", i, tempF);
	}

	return 0;
}