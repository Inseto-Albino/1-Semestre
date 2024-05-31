#include<stdio.h>
#include<stdlib.h>

void main(){
	char curso[40];
	int ano=0;
	float preco=0, valorFinal=0;
	
	printf("Qual curso o aluno frequenta? ");
	scanf("%s",curso);
	fflush(stdin);
	printf("Qual o preco do livro requisitado? ");
	scanf("%f",&preco);
	printf("Em qual ano o aluno esta? ");
	scanf("%i",&ano);
	
	system("pause");
	system("cls");
	
	if(ano == 1 || ano == 2){
		valorFinal = (preco*0.85);
		printf("Desconto de 15%%\nTotal a pagar: R$ %.2f",valorFinal);		
	}
	else if(ano == 3){
		valorFinal = (preco*0.78);
		printf("Desconto de 22%%\nTotal a pagar: R$ %.2f",valorFinal);
	}
	else {
		valorFinal = preco;
		printf("Sem desconto para esse ano\nTotal a pagar: R$ %.2f",valorFinal);
	}
	getchar();
}
