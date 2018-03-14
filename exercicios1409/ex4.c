#include <stdio.h>

int main() {

	int mes, digitosPlaca, resto1, resto2, resto3;

	printf("Informe o mes atual e os 4 numeros da placa: \n");
	scanf("%d %d", &mes, &digitosPlaca);
	//5096
	resto1 = digitosPlaca % 1000; //96
	if (resto1 >= 100) {  
		resto2 = resto1 % 100; 
		if (resto2 >= 10) {
			resto3 = resto2 % 10; 
			switch (resto3) {
				case 1: 
					if (mes == 1) {
						printf("Veiculo vence no mes corrente(Janeiro).\n");
					} else {
						printf("Veículo vence em janeiro.\n");
					}
					break;
				case 2:
					if (mes == 2) {
						printf("Veiculo vence no mes corrente(fevereiro).\n");
					} else {
						printf("Veiculo vence em fevereiro.\n");
					}
					break;
				case 3:
					if (mes == 3) {
						printf("Veiculo vence no mes corrente(março)\n");
					} else {
						printf("Veiculo vence em março.\n");
					}
					break;
				case 4:
					if (mes == 4) {
						printf("Veiculo vence no mes corrente(abril).\n");
					} else {
						printf("Veículo vence em abril.\n");
					}
					break;
				case 5:
					if (mes == 5) {
						printf("Veiculo mes no mes corrente(maio).\n");
					} else {
						printf("Veiculo vence em maio.\n");
					}
					break;
				case 6: 
					if (mes == 6) {
						printf("Veiculo vence no mes corrente(Junho).\n");
					} else {
						printf("Veículo vence em junho.\n");
					}
					break;
				case 7:
					if (mes == 7) {
						printf("Veiculo mes no mes corrente(julho).\n");
					} else {
						printf("Veiculo vence em julho.\n");
					}
					break;
				case 8: 
					if (mes == 8) {
						printf("Veiculo vence no mes corrente(Agosto).\n");
					} else {
						printf("Veículo vence em Agosto.\n");
					}
					break;
				case 9:
					if (mes == 9) {
						printf("Veiculo mes no mes corrente(setembro).\n");
					} else {
						printf("Veiculo vence em setembro.\n");
					}
					break;
				case 0: 
					if (mes == 10) {
						printf("Veiculo vence no mes corrente(outubro).\n");
					} else {
						printf("Veiculo vence em outubro.\n");
					}
					break;
				default:
					printf("Valores invalidos.\n");
			}

			return 0;


		} else {

			switch (resto2) {
				case 1: 
					if (mes == 1) {
						printf("Veiculo vence no mes corrente(Janeiro).\n");
					} else {
						printf("Veículo vence em janeiro.\n");
					}
					break;
				case 2:
					if (mes == 2) {
						printf("Veiculo vence no mes corrente(fevereiro).\n");
					} else {
						printf("Veiculo vence em fevereiro.\n");
					}
					break;
				case 3:
					if (mes == 3) {
						printf("Veiculo vence no mes corrente(março)\n");
					} else {
						printf("Veiculo vence em março.\n");
					}
					break;
				case 4:
					if (mes == 4) {
						printf("Veiculo vence no mes corrente(abril).\n");
					} else {
						printf("Veículo vence em abril.\n");
					}
					break;
				case 5:
					if (mes == 5) {
						printf("Veiculo mes no mes corrente(maio).\n");
					} else {
						printf("Veiculo vence em maio.\n");
					}
					break;
				case 6: 
					if (mes == 6) {
						printf("Veiculo vence no mes corrente(Junho).\n");
					} else {
						printf("Veículo vence em junho.\n");
					}
					break;
				case 7:
					if (mes == 7) {
						printf("Veiculo mes no mes corrente(julho).\n");
					} else {
						printf("Veiculo vence em julho.\n");
					}
					break;
				case 8: 
					if (mes == 8) {
						printf("Veiculo vence no mes corrente(Agosto).\n");
					} else {
						printf("Veículo vence em Agosto.\n");
					}
					break;
				case 9:
					if (mes == 9) {
						printf("Veiculo mes no mes corrente(setembro).\n");
					} else {
						printf("Veiculo vence em setembro.\n");
					}
					break;
				case 0: 
					if (mes == 10) {
						printf("Veiculo vence no mes corrente(outubro).\n");
					} else {
						printf("Veiculo vence em outubro.\n");
					}
					break;
				default:
					printf("Valores invalidos.\n");
			} //switch

			return 0;

		} // else [if (resto 2 >= 10) ]


	} else {
		resto2 = resto1 % 10;

		switch (resto2) {
				case 1: 
					if (mes == 1) {
						printf("Veiculo vence no mes corrente(Janeiro).\n");
					} else {
						printf("Veículo vence em janeiro.\n");
					}
					break;
				case 2:
					if (mes == 2) {
						printf("Veiculo vence no mes corrente(fevereiro).\n");
					} else {
						printf("Veiculo vence em fevereiro.\n");
					}
					break;
				case 3:
					if (mes == 3) {
						printf("Veiculo vence no mes corrente(março)\n");
					} else {
						printf("Veiculo vence em março.\n");
					}
					break;
				case 4:
					if (mes == 4) {
						printf("Veiculo vence no mes corrente(abril).\n");
					} else {
						printf("Veículo vence em abril.\n");
					}
					break;
				case 5:
					if (mes == 5) {
						printf("Veiculo mes no mes corrente(maio).\n");
					} else {
						printf("Veiculo vence em maio.\n");
					}
					break;
				case 6: 
					if (mes == 6) {
						printf("Veiculo vence no mes corrente(Junho).\n");
					} else {
						printf("Veículo vence em junho.\n");
					}
					break;
				case 7:
					if (mes == 7) {
						printf("Veiculo mes no mes corrente(julho).\n");
					} else {
						printf("Veiculo vence em julho.\n");
					}
					break;
				case 8: 
					if (mes == 8) {
						printf("Veiculo vence no mes corrente(Agosto).\n");
					} else {
						printf("Veículo vence em Agosto.\n");
					}
					break;
				case 9:
					if (mes == 9) {
						printf("Veiculo mes no mes corrente(setembro).\n");
					} else {
						printf("Veiculo vence em setembro.\n");
					}
					break;
				case 0: 
					if (mes == 10) {
						printf("Veiculo vence no mes corrente(outubro).\n");
					} else {
						printf("Veiculo vence em outubro.\n");
					}
					break;
				default:
					printf("Valores invalidos.\n");
			} //switch

			return 0;

	} // if (resto >= 100)
}