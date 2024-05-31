#include<stdio.h>
#include<stdlib.h>

void main(){
	int valor1=0, valor2=0, valor3=0, total=0;
	
	printf("\nSoma de Valores\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%i",&valor1);
	printf("\nDigite o segundo valor: ");
	scanf("%i",&valor2);
	printf("\nDigite o terceiro valor: ");
	scanf("%i",&valor3);
	
	total = (valor1 + valor2 + valor3);
	
	system("pause");
	system("cls");
	
	printf("\nSoma de Valores\n");
	printf("\nA soma dos valores foi: %i\n",total);
	
	system("pause");
}
