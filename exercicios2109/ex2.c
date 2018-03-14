#include <stdio.h>
#include <string.h>

int main() {

	int num, acum = 0, soma = 0;
	float media = 0;
	char resposta[2];

	do {

		printf("Digite um numero\n");
		scanf("%d", &num);

		acum++;

		soma = soma + num;

		printf("Deseja informar mais numeros? (s/n)\n");
		scanf("%s", resposta);


	} while (strcmp(resposta, "s") == 0);

	media = soma / acum;
	printf("Média = %.2f\n", media);

	return 0;

}