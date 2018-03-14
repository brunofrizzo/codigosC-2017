#include <stdio.h>

int main() {

	float vel1, vel2;
	printf("Informe uma velocidade em km/h\n");
	scanf("%f", &vel1);

	vel2 = vel1 / 3.6;
	printf("Resultado: %.2f\n", vel2);
	return 0;
}