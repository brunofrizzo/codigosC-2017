#include <stdio.h>

int main() {

	int num, centena, dezena, unidade;

	printf("Informe um número\n");
	scanf("%3d", &num);

	centena = num / 100;
	dezena = (num % 100) / 10;
	unidade = ((num % 100) % 10);
	
	printf("CENTENA: %d\nDEZENA: %d\nUNIDADE: %d\n", centena, dezena, unidade);
	return 0;
}