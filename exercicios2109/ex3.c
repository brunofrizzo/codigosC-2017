#include <stdio.h>

int main() {

	int num, fat = 1;

	printf("Informe um número\n");
	scanf("%d", &num);

	if (num < 0) {

		do {

		printf("Informe um numero positivo\n");
		scanf("%d", &num);

		} while (num < 0);

	}

	do {

		fat = fat * num; 
		num--;

	} while (num > 1);

	printf("Fatorial = %d\n", fat);

	return 0;
	

	}	


	