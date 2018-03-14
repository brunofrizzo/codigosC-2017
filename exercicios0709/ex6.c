#include <stdio.h>

int main() {

	float n1, n2;
	char op;

	printf("Informe dois numeros e a sinal da operacao (+, -, * ou /)\n");
	scanf("%f %f %c", &n1, &n2, &op);

	switch (op) {
		case '+': printf("Resultado: %.2f\n", n1+n2);
		break;
		case '-': printf("Resultado: %.2f\n", n1-n2);
		break;
		case '*': printf("Resultado: %.2f\n", n1*n2);
		break;
		case '/':
			if (n2 == 0) {
				printf("Resultado: 0\n");
			} else {
				printf("Resultado: %.2f\n", n1/n2);		
			} 
		break;
		default: printf("Operador invalido.\n");
	}
	return 0;
}