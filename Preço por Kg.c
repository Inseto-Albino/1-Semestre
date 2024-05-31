#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int peso1=0, peso2=0, peso3=0;
	// Subtotal 1, 2 e 3
	float preco1=0, preco2=0, preco3=0, subtot1=0, subtot2=0, subtot3=0, total=0;
	
	printf("\nDigite o peso do primeiro produto(Kg): ");
	scanf("%i",&peso1);
	fflush(stdin);
	printf("Quanto custa cada quilograma(Kg)? ");
	scanf("%f",&preco1);
	system("pause");
	system("cls");
	
	printf("\nDigite o peso do segundo produto(Kg): ");
	scanf("%i",&peso2);
	fflush(stdin);
	printf("Quanto custa cada quilograma(Kg)? ");
	scanf("%f",&preco2);
	system("pause");
	system("cls");
	
	printf("\nDigite o peso do terceiro produto(Kg): ");
	scanf("%i",&peso3);
	fflush(stdin);
	printf("Quanto custa cada quilograma(Kg)? ");
	scanf("%f",&preco3);
	system("pause");
	system("cls");
	
	subtot1 = (peso1*preco1);
	subtot2 = (peso2*preco2);
	subtot3 = (peso3*preco3);
	total = (subtot1 + subtot2 + subtot3);
	
	printf("Resultados\n");
	printf("\nPrimeiro produto: R$ %.2f",subtot1);
	printf("\nSegundo produto: R$ %.2f",subtot2);
	printf("\nTerceiro produto: R$ %.2f",subtot3);
	printf("\nValor total: R$ %.2f\n",total);
	system("pause");
}
