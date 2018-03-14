#include <stdio.h>

int main() {

	char figura;
	float area;
	float base, altura, baseMaior, baseMenor;

	printf("Informe a figura geometrica\n");
	scanf("%c", &figura);

	switch(figura) {
		case 'q': 
			printf("Informe o valor do lado\n");
			scanf("%f", &base);
			area = base * base;
			printf("Figura: Quadrado\nArea: %.2f\n", area);
			break;
		case 'r':
			printf("Informe o valor da base e da altura\n");
			scanf("%f %f", &base, &altura);
			area = base * altura;
			printf("Figura: Retangulo\nArea: %.2f\n", area);
			break;
		case 't':
			printf("Informe o valor da base e da altura\n");
			scanf("%f %f", &base, &altura);
			area = (base * altura) / 2;
			printf("Figura: Triangulo\nArea: %.2f\n", area);
			break;
		case 'p':
			printf("Informe o valor da base maior, da base menor e da altura\n");
			scanf("%f %f %f", &baseMaior, &baseMenor, &altura);
			area = ((baseMaior + baseMenor) * altura ) / 2;
			printf("Figura: Trapezio\nArea: %.2f\n", area);
			break;
		default:
			printf("Informe uma figura valida.\n");
	}

	return 0;



}