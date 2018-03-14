#include <stdio.h>

int main() {

	float base, altura, area;
	printf("Informe a base e a altura do triangulo\n");
	scanf("%f %f", &base, &altura);

	area = (base * altura) / 2;
	printf("Área: %.2f\n", area);
	return 0;
}