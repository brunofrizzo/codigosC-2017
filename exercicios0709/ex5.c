#include <stdio.h>

int main() {

	int x, y, menor;

	printf("Informe dois numeros inteiros: \n");
	scanf("%d %d", &x, &y);

	menor = (x < y) ? x : y;

	printf("Menor número: %d\n", menor);
	return 0;
}