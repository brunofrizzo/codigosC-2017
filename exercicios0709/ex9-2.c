#include <stdio.h>

int main() {

	float x, y;

	printf("Informe x e y: \n");
	scanf("%f %f", &x, &y);

	if ((x > 0) && (y > 0)) {
		printf("Ponto no segundo quadrante.\n");
	} else if ((x > 0) && (y < 0)) {
		printf("Ponto no quarto quadrante.\n");
	} else if ((x < 0) && (y < 0)) {
		printf("Ponto no terceiro quadrante.\n");
	} else if ((x < 0) && (y > 0)) {
		printf("Ponto no primeiro quadrante.\n");
	} else if (x == 0) {
		printf("Ponto sobre o eixo Y.\n");
	} else if (y == 0) {
		printf("Ponto sobre o eixo X.\n");
	}

	return 0;
}