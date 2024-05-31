#include<stdio.h>
#include<stdlib.h>

void main(){
	int opcao=0;
	float valor=0, valorFinal=0;
	
	printf("Insira o valor a pagar: ");
	scanf("%f",&valor);
	printf("Insira a opcao de pagamento: ");
	scanf("%i",&opcao);
	
	system("pause");
	system("cls");
	
	if(opcao == 1){
		valorFinal = valor - (valor*0.11);
	}
	else if(opcao == 2) {
		valorFinal = valor + (valor*0.12);
	}
	else {
		printf("Erro!\n");
	}
	printf("O valor final a pagar e: R$ %.2f",valorFinal);
}
