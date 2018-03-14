#include <stdio.h>

int main() {

	float diametroTer, diametroCasa, areaTer, areaCasa, areaLivreMetro, areaLivrePercent;
	printf("Informe o diâmetro do terreno: \n");
	scanf("%f", &diametroTer);
	printf("Informe o diametro da casa: \n");
	scanf("%f", &diametroCasa);

	areaTer = 3.14 * ((diametroTer / 2) * (diametroTer / 2));
	areaCasa = 3.14 * ((diametroCasa / 2) * (diametroCasa / 2));
	areaLivreMetro = areaTer - areaCasa;
	areaLivrePercent = (areaLivreMetro / areaTer) * 100;

	printf("Area livre em m2: %.2f\nArea livre em percentual: %.2f\n", areaLivreMetro, areaLivrePercent);
	return 0;	
}