#include <stdio.h>

int main() {

	int qtdDVD, qtdAluguelMensal, qtdDVDAtrasoMensal, qtdDVDFinal;
	float valorAluguel, faturamentoAnual, faturamentoMensal, valorMulta, valorMensalMulta;

	printf("Informe a quantidade de DVD's e o valor do aluguel\n");
	scanf("%d %f", &qtdDVD, &valorAluguel);

	qtdAluguelMensal = qtdDVD / 3;
	faturamentoMensal = qtdAluguelMensal * valorAluguel;
	faturamentoAnual = faturamentoMensal * 12;
	valorMulta = 0.1 * valorAluguel;
	qtdDVDAtrasoMensal = qtdAluguelMensal / 10;
	valorMensalMulta = qtdDVDAtrasoMensal * valorMulta;
	qtdDVDFinal = qtdDVD - (0.02 * qtdDVD) + (0.1 * qtdDVD);

	printf("Faturamento anual: R$ %.2f\nValor ganho com multas por mês: R$%.2f\nFitas no final do ano: %d\n", faturamentoAnual,
	valorMensalMulta, qtdDVDFinal);
	return 0;
}