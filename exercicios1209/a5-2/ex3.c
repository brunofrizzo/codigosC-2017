#include <stdio.h>

int main() {

	float a, b, c;

	printf("Informe os valores do 3 lados: \n");
	scanf("%f %f %f", &a, &b, &c);

	if ( ( a < (b + c) ) && ( (a + c) > b ) &&  ( b < (a + c) ) && ( (b + c) > a ) && ( c < (a + b) ) && ( (c + b) > a ) )  {
		
		if ( (a == b) && (b == c) ) {
			printf("Triangulo equilátero.\n");
		} else if ( (a == b) || (a == c) || (b == c) ) {
			printf("Triangulo isósceles.\n");
		} else if ( (a != b) && (a != c) && (c != b) ) {
			printf("Triangulo escaleno.\n");
		}

	} else {

		printf("Não formam triangulo. \n");
	
	}

	return 0;

}