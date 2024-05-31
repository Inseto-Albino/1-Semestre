#include<stdio.h>
#include<stdlib.h>

void main(){
	char modelo[30], marca[30], ano[5], serie[10], placa_mae[10];
	
	printf("\nDados do Aparelho\n");
	printf("\nModelo: ");
	scanf("%s",modelo);
	printf("\nMarca ");
	scanf("%s",marca);
	printf("\nAno: ");
	scanf("%s",ano);
	printf("\nSerie: ");
	scanf("%s",serie);
	printf("\nPlaca Mae: ");
	scanf("%s",placa_mae);
	
	system("pause");
	system("cls");
	
	printf("\nDados do Aparelho:\n");
	printf("\nModelo: %s",modelo);
	printf("\nMarca: %s",marca);
	printf("\nAno: %s",ano);
	printf("\nSerie: %s",serie);
	printf("\nPlaca Mae: %s\n",placa_mae);
	
	system("pause");
}
