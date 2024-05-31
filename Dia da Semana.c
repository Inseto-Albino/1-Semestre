#include<stdio.h>
#include<stdlib.h>

void main(){
	int numero=0;
	
	printf("Digite um numero de 1 a 7: ");
	scanf("%i",&numero);
	
	system("pause");
	system("cls");
	
	if(numero == 1){
		printf("Hoje e domingo!");
	}
	else if(numero == 2){
		printf("Hoje e segunda!");
	}
	else if(numero == 3){
		printf("Hoje e terca!");
	}
	else if(numero == 4){
		printf("Hoje e quarta!");
	}
	else if(numero == 5){
		printf("Hoje e quinta!");
	}
	else if(numero == 6){
		printf("Hoje e sexta!");
	}
	else if(numero == 7){
		printf("Hoje e sabado!");
	}
	else {
		printf("Numero invalido");
	}
	getchar();
}
