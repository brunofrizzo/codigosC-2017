#include <stdio.h>
#include <string.h>

int main() {

	char ch1, ch2, str1[255], str2[255];
	int i, tam;

	printf("informe uma string: ");
	fgets(str1, 255, stdin);

	printf("informe 2 caracteres: ");
	scanf("%c %c", &ch1, &ch2);

	strcpy(str2, str1);

	tam = strlen(str2);

	for (i=0; i<tam; i++) {

		if (str2[i] == ch1) {

			str2[i] = ch2;
		
		}
	
	}

	printf("string original: %s\n", str1);
	printf("string alterada: %s\n", str2);

	return 0;
}