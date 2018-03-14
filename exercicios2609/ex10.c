#include <stdio.h>

int main() {

	int num, i=0, t=0;

	printf("informe um numero\n");
	scanf("%d", &num);

	while (i < num) {

		if ((i * (i+1) * (i+2)) == num) {
			t++;
			break;
		}
		
		i++;

	}

	if (t > 0) {
		printf("numero %d é triangular\n", num);
	} else {
		printf("numero %d não é triangular\n", num);
	}

	return 0;
}