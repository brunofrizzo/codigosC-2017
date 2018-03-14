#include <stdio.h>

int main() {

	int num, p = 1;

	do {
		printf("digite um numero\n");
		scanf("%d", &num);

		if ((num > 0) && (num != 0)) {
			p = p*num;
		}
		
	} while (num > 0);

	printf("Produto = %d\n", p);

	return 0;
}