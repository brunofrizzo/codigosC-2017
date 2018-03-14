#include <stdio.h>
#include <string.h>

int main() {

	char str1[50], str2[50];
	int i, j, tam, aux;

	printf("informe uma string: ");
	fgets(str1, 50, stdin);

	tam = strlen(str1);
	aux = tam;

	for (i=0;i<tam; i++) {

		str2[i] = str1[aux-1];
		aux--;
	
	}

	printf("1 - %s", str1);
	printf("2 - %s\n", str2);

	if (strcmp(str1, str2) == 0) {
		printf("é palindromo\n");
	} else {
		printf("nao é palindromo\n");
	}

	return 0;
}