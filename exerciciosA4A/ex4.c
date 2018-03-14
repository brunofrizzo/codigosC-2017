#include <stdio.h>

int main() {
	
	int a, b;

	printf("Informe dois valores inteiros \n");
	scanf("%d %d", &a, &b);

	printf("Valor a: %d e valor b: %d\n", a, b);
	a = b + a;  
	b = a - b; 
	a = a - b;
	printf("Valor a: %d e valor b: %d\n", a, b);
	return 0;

}