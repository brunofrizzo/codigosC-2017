#include <stdio.h>

int main () {
	int x = 8;

	if (x > 10) {
		if (x > 21) {
			if (x>30) {
				printf("c1\n");
			}
		} else {
			printf("c2\n");
		}
	} else {
		printf("c3\n");
	}

} 
