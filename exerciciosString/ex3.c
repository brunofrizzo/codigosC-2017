#include <stdio.h>
#include <string.h>



int main() {

	char ch, str[255];
	int i, j=0, tam, vet[100];

	printf("informe uma string: ");
	fgets(str, 255, stdin);

	printf("informe um caractere: ");
	scanf("%c", &ch);

	tam = strlen(str);

	for (i=0; i<tam; i++) {

		if (str[i] == ch) {

			vet[j] = i;
			j++;
		}
	}

	printf("indices onde ocorrem o caractere: ");

	for (i=0; i<j;i++) {
		printf("%d ", vet[i]);
	}

	return 0;
}