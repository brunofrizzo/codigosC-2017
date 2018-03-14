#include <stdio.h>

int main() {

	int horaInicio, horaFim, tempo;


	printf("Informe a hora inicial e a hora final: \n");
	scanf("%d %d", &horaInicio, &horaFim);

	if (horaFim == horaInicio) {

		printf("Jogo deve durar no mínimo 1 hora.\n");

	}

	if (horaFim > horaInicio) {

		tempo = horaFim - horaInicio;
		printf("Tempo de jogo: %d\n", tempo);

	} else {

		tempo = (24 - horaInicio) + horaFim; 
		printf("Tempo de jogo: %d\n", tempo);

	}

	return 0;
}