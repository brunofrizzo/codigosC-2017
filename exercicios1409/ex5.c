#include <stdio.h>

int main() {

	int horaEntrada, minEntrada, horaSaida, minSaida, tempo;
	float valor;

	printf("Informe a hora de entrada e saida\n");
	scanf("%d %d %d %d", &horaEntrada, &minEntrada, &horaSaida, &minSaida);

	if ((horaEntrada >=24) || (horaSaida >= 24)) {

		printf("Hora invalida.\n");

	} else if ((minEntrada > 60) || (minSaida > 60)) {

		printf("Minutos invalidos.\n");

	} else if (horaSaida <= horaEntrada) {

		tempo = (24 - horaEntrada) + horaSaida;
		if (minSaida > minEntrada) {
			tempo = tempo + 1;
		} 

	} else {

		tempo = horaSaida - horaEntrada;
		if (minSaida > minEntrada) {
			tempo = tempo + 1;
		}

	}

	if (tempo == 1) {
		valor = 1.00;
		printf("Valor: R$%.2f\n", valor);
	} else if (tempo == 2) {
		valor = 2.00;
		printf("Valor: R$%.2f\n", valor);
	} else if (tempo == 3) {
		valor = 3.40;
		printf("Valor: R$%.2f\n", valor);
	} else if (tempo == 4) {
		valor = 4.80;
		printf("Valor: R$%.2f\n", valor);
	} else if (tempo >= 5) {
		valor = 6.80 + ((tempo - 5) * 2.00);
		printf("Valor: R$%.2f\n", valor); 
	}

	printf("Tempo: %d\n", tempo);

	return 0;
}