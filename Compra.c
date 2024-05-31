#include<stdio.h>
#include<stdlib.h>

void main(){
	//Quantidade 1 e 2
	int quant1=0, quant2=0;
	//Subtotal 1 e 2
	float valor1=0, valor2=0, subtot1=0, subtot2=0, total=0;
	
	printf("\nCompra de Produtos\n");
	printf("\nDigite o valor do primeiro produto: ");
	scanf("%f",&valor1);
	printf("\nDigite a quantidade de produtos: ");
	scanf("%i",&quant1);
	printf("\nDigite o valor do segundo produto: ");
	scanf("%f",&valor2);
	printf("\nDigite a quantidade de produtos: ");
	scanf("%i",&quant2);
	
	subtot1 = (valor1*quant1);
	subtot2 = (valor2*quant2);
	total = (subtot1 + subtot2);
	
	system("pause");
	system("cls");
	
	printf("\nCompra de Produtos\n");
	printf("\nO subtotal da primeira compra foi: R$ %.2f\n",subtot1);
	printf("\nO subtotal da segunda compra foi: R$ %.2f\n",subtot2);
	printf("\nO total da compra foi: R$ %.2f\n",total);
	
	system("pause");
}
