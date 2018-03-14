#include <stdio.h>

int main() {

	float dimensaoTer1, dimensaoTer2, dimensaoCasa1, dimensaoCasa2, areaTer, areaCasa, areaLivreMetro, areaLivrePercent;
	printf("Informe as dimensões do terreno: \n");
	scanf("%f %f", &dimensaoTer1, &dimensaoTer2);
	printf("Informe as dimensões da casa: \n");
	scanf("%f %f", &dimensaoCasa1, &dimensaoCasa2);

	areaTer = dimensaoTer1 * dimensaoTer2;
	areaCasa = dimensaoCasa1 * dimensaoCasa2;
	areaLivreMetro = areaTer - areaCasa;
	areaLivrePercent = (areaLivreMetro / areaTer) * 100;

	printf("Area livre em m2: %.2f\nArea livre em percentual: %.2f\n", areaLivreMetro, areaLivrePercent);
	return 0;	
}