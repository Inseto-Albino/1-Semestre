#include<stdio.h>
#include<stdlib.h>

void main(){
	char *pagamento[40];
	int opcao=0;
	float valor=0, valorFinal=0;
	
	printf("Menu de Opcoes:\n");
	printf("\n[1] Pagamento a Vista");
	printf("\n[2] Pagamento em 30 Dias");
	printf("\n[3] Pagamento Parcelado em 3X\n");
	printf("\nDigite o valor a pagar: ");
	scanf("%f",&valor);
	printf("Digite a opcao de pagamento: ");
	scanf("%i",&opcao);
	
	system("pause");
	system("cls");
	
	if(opcao == 1){
		valorFinal = (valor*0.9);
		*pagamento = "Pagamento-a-Vista";
	}
	else if(opcao == 2){
		valorFinal = (valor*1.15);
		*pagamento = "Pagamento-em-30-Dias";
	}
	else if(opcao == 3){
		valorFinal = (valor*1.2)/3;
		*pagamento = "Pagamento-Parcelado-em-3X";
	}
	else {
		printf("Opcao invalida");
	}
	
	printf("Valor Inicial: R$ %.2f\n%s\nValor Final: R$ %.2f",valor,*pagamento,valorFinal);
	getchar();
}
