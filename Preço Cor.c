#include<stdio.h>
#include<stdlib.h>

void main(){
	int quantidade=0, cor=0;
	float preco=0, valorFinal=0;
	
	printf("Menu de Precos:\n");
	printf("\n[1] Verde - R$ 10.00");
	printf("\n[2] Azul - R$ 20.00");
	printf("\n[3] Amarelo - R$ 30.00");
	printf("\n[4] Vermelho - R$ 40.00\n");
	printf("\nDigite a cor do disco: ");
	scanf("%i",&cor);
	printf("Digite a quantidade de discos requisitada: ");
	scanf("%i",&quantidade);
	
	system("pause");
	system("cls");
	
	if(cor == 1){
		preco = 10;
	}
	else if(cor == 2){
		preco = 20;
	}
	else if(cor == 3){
		preco = 30;
	}
	else if(cor == 4){
		preco = 40;
	}
	else {
		printf("Codigo de cor invalido");
	}
	
	valorFinal = (preco*quantidade);
	printf("Preco: R$ %.2f\nQuantidade: %i uni\nTotal a pagar: R$ %.2f",preco,quantidade,valorFinal);
	getchar();
}
