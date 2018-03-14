#include <stdio.h>

int main() {

	int matricula, i;
	float nota1, nota2, nota3, media;

	printf("Informe a matricula e 3 notas de 10 alunos\n");

	for (i=1; i <= 10; i++) {

		scanf("%d %f %f %f", &matricula, &nota1, &nota2, &nota3);

		media = ((nota1 * 4) + (nota2 * 3) + (nota3 * 3)) / 10;

		printf("Matricula: %d\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\nMedia: %.2f\n", matricula, nota1, nota2, nota3, media);
		if (media >= 7) {
			printf("APROVADO\n");
		} else {
			printf("REPROVADO\n");
		}
	}

	return 0;
}