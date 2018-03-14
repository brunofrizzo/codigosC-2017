#include <stdio.h>

int main() {

	int a, b, c;

	printf("Informe 3 numeros inteiros\n");
	scanf("%d %d %d", &a, &b, &c);

	if ((a != b) && (a != c)) {
		printf("Ana\n");
	} else if ((b != a) && (b != c)) {
		printf("Bob\n");
	} else if ((c != a) && (c != b)) {
		printf("Caren\n");
	} else if ((a == b) && (b == c)) {
		printf("*\n");
	}

	return 0;
}