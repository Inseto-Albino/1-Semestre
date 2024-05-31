#include<stdio.h>
#include<stdlib.h>

void main(){
	int idade=0;
	
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	
	system("pause");
	system("cls");
	
	if(idade >= 18){
		printf("Voce e maior de idade");
	}
	else {
		printf("Voce e menor de idade");
	}
}
