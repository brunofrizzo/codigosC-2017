#include <stdio.h>
#include <string.h>

int main () {

	char str1[51], str2[51];
	int i, tam, cont;

	printf("informe uma string: ");
	fgets(str1, 51, stdin);

	strcpy(str2, str1);

	tam = strlen(str2);

	for (i=0; i<tam; i++) {

		if (str2[i] == ' '){
			str2[i] = '*';
			cont++;
		}

	}
	
	printf("%s\n", str2);
	printf("Posicoes alteradas: %d\n", cont);

	return 0;
}