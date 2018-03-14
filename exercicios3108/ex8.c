#include <stdio.h>
#include <math.h>

int main() {

	float a, b, c, x1, x2, delta;

	printf("Informe os coeficientes A, B e C da equação: \n");
	scanf("%f %f %f", &a, &b, &c);

	delta = (b*b) - (4*a*c);

	if (delta < 0) {
		printf("A equação não tem raizes reais. \n");
		return 0;
	} else {
		x1 = - b + sqrt(delta);
		if (a == 0) {
			printf("Equação de 1 grau");
			return 0;
		} else {
			x2 = - b - sqrt(delta);
			printf("Raizes = %.2f e %.2f.\n", x1, x2);
			return 0;
		}
	}
		

}