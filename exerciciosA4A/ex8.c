#include <stdio.h>

int main() {

	int qtdMoedas1, qtdMoedas5, qtdMoedas10, qtdMoedas25, qtdMoedas50, qtdMoedas1real;
	float total, valorRealMoedas1, valorRealMoedas5, valorRealMoedas10,	valorRealMoedas25, valorRealMoedas50, valorRealMoedas1Real;

	printf("Informe a quantidade de moedas de 1, 5, 10 25 e 50 centavos e de 1 real, respectivamente\n");
	scanf("%d %d %d %d %d %d", &qtdMoedas1, &qtdMoedas5, &qtdMoedas10, &qtdMoedas25, &qtdMoedas50, &qtdMoedas1real);

	valorRealMoedas1 = qtdMoedas1 * 0.01;
	valorRealMoedas5 = qtdMoedas5 * 0.05;
	valorRealMoedas10 = qtdMoedas10 * 0.1;
	valorRealMoedas25 = qtdMoedas25 * 0.25;
	valorRealMoedas50 = qtdMoedas50 * 0.5;

	total = qtdMoedas1real + valorRealMoedas50 + valorRealMoedas25 + valorRealMoedas10 + valorRealMoedas5 + valorRealMoedas1;
	printf("Total em reais: R$%.2f\n", total);
	return 0;
}