#include <stdio.h>

int main() {

	int i, num, maior;
	maior = 0;

	printf("Informe 20 valores\n");

	for (i = 1; i <= 20; i++) {

		scanf("%d", &num);
		if (num > maior) {
			maior = num;	
		}
		
	}

	printf("Maior valor: %d\n", maior);

	return 0;
}