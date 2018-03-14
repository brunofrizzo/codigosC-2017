#include <stdio.h>

int main() {

	int i, j;
	float s;

	s = 0;

	for (i = 1, j = 1; i <= 99, j <= 50; i++, j++) {

		if (i > 1) {

			if (i%2 == 0) {
				i++;
				s = s + (i/j);

			} 	

		} else {
			s = s + i/j;
		}
		
	}

	printf("S = %.2f\n", s);

	return 0;
}