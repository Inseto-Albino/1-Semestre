#include<stdio.h>
#include<stdlib.h>

void main(){
	int numero1=0, numero2=0;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&numero1);
	printf("Digite o segundo numero: ");
	scanf("%i",&numero2);
	
	system("pause");
	system("cls");
	
	if(numero1 > numero2){
		printf("%i e maior que %i",numero1,numero2);
	}
	else if (numero2 > numero1) {
		printf("%i e maior que %i",numero2,numero1);
	}
	else {
		printf("Os numeros sao iguais");
	}
}
