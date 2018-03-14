#include <stdio.h>

int main() {

	int x0Retang1, x1Retang1, y0Retang1, y1Retang1, x0Retang2, x1Retang2, y0Retang2, y1Retang2;

	printf("Informe as coordenadas do canto inferior esquerdo(X e Y) e as coordenadas do canto superior direito(X e Y) do primeiro retangulo: \n");
	scanf("%d %d %d %d", &x0Retang1, &y0Retang1, &x1Retang1, &y1Retang1);

	printf("Informe as coordenadas do canto inferior esquerdo(X e Y) e as coordenadas do canto superior direito(X e Y) do segundo retangulo: \n");	
	scanf("%d %d %d %d", &x0Retang2, &y0Retang2, &x1Retang2, &y1Retang2);

	if ( ((x0Retang2 > x1Retang1) && (y0Retang2 > y1Retang1)) || ((x1Retang2 < x0Retang1) && (y0Retang2 > y1Retang1)) ) {
		printf("0\n");
	} else {
		printf("1\n");
	}


	return 0;
}