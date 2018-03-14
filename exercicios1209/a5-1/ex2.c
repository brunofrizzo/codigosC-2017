#include <stdio.h>

int main() {


	int x, y;

	printf("Informe as coordenadas (X e Y):\n");
	scanf("%d %d", &x, &y);

	if ( (x > 432) || (y > 468) || (x < 0) || (y < 0) ) {
		printf("Bola fora da quadra.\n");
	} else {
		printf("Bola dentro da quadra.\n");
	}

	return 0;
}