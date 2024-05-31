#include<stdio.h>
#include<stdlib.h>

void main(){
	char *destino[30];
	int pais=0;
	float preco=0, frete=0, valorFinal=0;
	
	printf("Menu de Paises:\n");
	printf("\n[1] Estados Unidos - R$ 60.00");
	printf("\n[2] Franca - R$ 75.50");
	printf("\n[3] Mexico - R$ 50.00");
	printf("\n[4] Argentina - R$ 27.35\n");
	printf("[5] China - R$ 80.00\n");
	printf("\nDigite o preco do produto: ");
	scanf("%f",&preco);
	printf("Digite o pais de destino: ");
	scanf("%i",&pais);
	
	system("pause");
	system("cls");
	
	if(pais == 1){
		frete = 60;
		valorFinal = (preco+frete);
		*destino = "Estados Unidos";
	}
	else if(pais == 2){
		frete = 75.5;
		valorFinal = (preco+frete);
		*destino = "Franca";
	}
	else if(pais == 3){
		frete = 50;
		valorFinal = (preco+frete);
		*destino = "Mexico";
	}
	else if(pais == 4){
		frete = 27.35;
		valorFinal = (preco+frete);
		*destino = "Argentina";
	}
	else if(pais == 5){
		frete = 80;
		valorFinal = (preco+frete);
		*destino = "China";
	}
	else {
		printf("Pais invalido\n\n");
	}
	
	printf("Preco do Produto: R$ %.2f\nPais de Destino: %s\nFrete: R$ %.2f\nValor Final: R$ %.2f",preco,*destino,frete,valorFinal);
	getchar();
}
