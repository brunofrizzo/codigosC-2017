#include <stdio.h>

int main() {

	float horasTrab, valorHora, salBruto, salLiquido, descIR, descINSS, descContribuicao;

	printf("Informe o valor da hora trabalhada e as horas trabalhadas\n");
	scanf("%f %f", &valorHora, &horasTrab);

	salBruto = horasTrab * valorHora;
	descIR = salBruto * 0.11;
	descINSS = salBruto * 0.08;
	descContribuicao = salBruto * 0.05;

	salLiquido = salBruto - descIR - descINSS - descContribuicao;

	printf("Salário Bruto: %.2f\nSalário Líquido: %.2f\nDesconto IR: %.2f\nDesconto INSS: %.2f\nDesconto contribuição sindical: %.2f\n", salBruto, salLiquido, descIR, descINSS, descContribuicao);
	return 0; 
}