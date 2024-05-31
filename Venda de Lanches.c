#include<stdio.h>
#include<stdlib.h>

void main(){
	char *lanche[30];
	int opcao=0, quantidade=0;
	float preco=0, valorFinal=0;
	
	printf("\nLanches do Ritz\n\n1 - Sanduba R$ 25.00\n2 - XNervoso R$ 27.50\n3 - XInfinito R$ 30.00\n");
	printf("\nQual lanche deseja pedir? ");
	scanf("%i",&opcao);
	printf("Quantos vai querer? ");
	scanf("%i",&quantidade);
	
	system("pause");
	system("cls");
	
	if(opcao == 1){
		preco = 25;
		valorFinal = (preco*quantidade);
		*lanche = "Sanduba";
	}
	else if(opcao == 2) {
		preco = 27.50;
		valorFinal = (preco*quantidade);
		*lanche = "XNervoso";
	}
	else if(opcao == 3){
		preco = 30;
		valorFinal = (preco*quantidade);
		*lanche = "XInfinito";
	}
	else {
		printf("Erro!\n");
	}
	printf("Voce pediu %i %s(s) que custa(m) R$ %.2f, pagando no total R$ %.2f",quantidade,*lanche,preco,valorFinal);
}
