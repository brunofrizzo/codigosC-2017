#include <stdio.h>
#include <math.h>

int main() {

	float a, b, c, semiPerimetro, area;

	printf("Informe os valores do 3 lados: \n");
	scanf("%f %f %f", &a, &b, &c);

	semiPerimetro = (a + b + c) / 2;

	if ( ( a < (b + c) ) && ( (a + c) > b ) &&  ( b < (a + c) ) && ( (b + c) > a ) && ( c < (a + b) ) && ( (c + b) > a ) )  {
		
		area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro  - c));
		printf("Area do triangulo: %.2f\n", area);

	} else {

		printf("Não formam triangulo. \n");
	
	}

	return 0;
}