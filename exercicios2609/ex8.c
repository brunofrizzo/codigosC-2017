#include <stdio.h>

int main() {

	int num1, num2, menor, i=1;

	printf("informe um numero\n");
	scanf("%d", &num1);

	menor = num1;

	while (i <= 9) {
		
		printf("informe um numero\n");
		scanf("%d", &num2);

		if (num2 < menor) {
			menor = num2;
		}

		i++;	
	}
	
	printf("Menor = %d\n", menor);
	return 0;
}