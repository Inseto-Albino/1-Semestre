//Bibliotecas
#include<stdio.h>
#include<stdlib.h>

void main(){
	//Definindo Variaveis
	char produto[30], marca[20], codigo[10];
	int dia=0, mes=0, ano=0;
	float valor=0, peso=0, litro=0;
	
	//Inserção de Dados
	printf("Dados do Produto\n");
	printf("\nNome: ");
	scanf("%s",produto);
	printf("Marca: ");
	scanf("%s",marca);
	printf("Codigo: ");
	scanf("%s",codigo);
	printf("Preco: ");
	scanf("%f",&valor);
	printf("Peso: ");
	scanf("%f",&peso);
	printf("Litro: ");
	scanf("%f",&litro);
	printf("\nValidade\n");
	printf("\nDia: ");
	scanf("%i",&dia);
	printf("Mes: ");
	scanf("%i",&mes);
	printf("Ano: ");
	scanf("%i",&ano);
	
	//Limpa a Tela "Clean Screen"
	system("cls");
	
	//Exibição de Dados
	printf("Dados do Produto\n");
	printf("\nNome: %s",produto);
	printf("\nMarca: %s",marca);
	printf("\nCodigo: %s",codigo);
	printf("\nPreco: R$ %.2f",valor);
	printf("\nPeso: %.3f Kg",peso);
	printf("\nLitro: %.3f L",litro);
	printf("\nValidade: %i/%i/%i",dia,mes,ano);
}
