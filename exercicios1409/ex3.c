#include <stdio.h>

int main() {

	int x0Retang1, x1Retang1, y0Retang1, y1Retang1, area, xPonto, yPonto;

	printf("Informe as coordenadas do vertice superior esquerdo(X e Y) e as do vertice inferior direito(X e Y)\n");
	scanf("%d %d %d %d", &x0Retang1, &y0Retang1, &x1Retang1, &y1Retang1);

	if ( (x0Retang1 < 0) || (x1Retang1 < 0) || (y0Retang1 < 0) || (y1Retang1 < 0) ) {
		printf("As coordenadas devem ser positivas.\n");
	} else if ((x1Retang1 == x0Retang1) && (y0Retang1 != y1Retang1)) {
		printf("É uma reta vertical.\n");
	} else if ((y0Retang1 == y1Retang1) && (x0Retang1 != x1Retang1)) {
		printf("É uma reta horizontal.\n");
	} else if ((x0Retang1 == x1Retang1) && (y0Retang1 == y1Retang1)) {
		printf("É um ponto.\n");
	} else {
		area = (x1Retang1 - x0Retang1) * (y0Retang1 - y1Retang1);
		printf("É um retangulo de area = %d.\n", area);
	}
	
	printf("Informe as coordenadas de um ponto(X e Y) \n");
	scanf("%d %d", &xPonto, &yPonto);

	if ((yPonto > y0Retang1) &&  (xPonto < x0Retang1)) {
		printf("Ponto acima e à esquerda.\n");
	} else if ( (yPonto > y0Retang1) && ( (xPonto >= x0Retang1) && (xPonto <= x1Retang1) ) ) {
		printf("Ponto acima.\n");
	} else if ((yPonto > y0Retang1) && (xPonto > x0Retang1)) {
		printf("Ponto acima e a direita.\n");
	} else if ((yPonto < y1Retang1) && (xPonto < x0Retang1)) {
		printf("Ponto embaixo e a esquerda.\n");
	} else if ( (yPonto < y1Retang1) && ( (xPonto >= x0Retang1) && (xPonto <= x1Retang1) ) ) {
		printf("Ponto embaixo.\n");
	} else if ((yPonto < y1Retang1) && (xPonto > x1Retang1)) {
		printf("Ponto embaixo e a direita\n");
	} else if ( (xPonto < x0Retang1) && ( (yPonto <= y0Retang1) && (yPonto >= y1Retang1) ) ) {
		printf("Ponto a esquerda.\n");
	} else if ( (xPonto > x1Retang1) && ( (yPonto <= y0Retang1) && (yPonto >= y1Retang1) ) ) {
		printf("Ponto a direita.\n");
	} else if ( (xPonto > x0Retang1) && (xPonto < x1Retang1) && (yPonto < y0Retang1) && (yPonto > y1Retang1) ) {
		printf("Ponto dentro.\n");
	} else if ( ( ((xPonto == x0Retang1) || (xPonto == x1Retang1)) && ( (yPonto >= y0Retang1) && (yPonto <= y1Retang1) ) ) || ( ((yPonto == y0Retang1) || (yPonto == y1Retang1)) && ( (xPonto >= x0Retang1) && (xPonto <= x1Retang1) ) ) ) {
		printf("Ponto na linha do retangulo.\n");
	}

	return 0; 
}