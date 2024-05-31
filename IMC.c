#include<stdio.h>
#include<stdlib.h>

void main(){
	float peso=0, altura=0, imc=0;
	
	printf("\nDigite o seu peso: ");
	scanf("%f",&peso);
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	
	imc = (peso/(altura*altura));
	
	system("pause");
	system("cls");
	
	if(imc < 18.5){
		printf("Voce esta abaixo do peso");
	}
	else if(imc >= 18.5 && imc <= 24.9){
		printf("Voce esta com o peso normal");
	}
	else if(imc >= 25 && imc <= 29.9){
		printf("Voce esta com sobrepeso");
	}
	else if(imc >= 30 && imc <= 34.9){
		printf("Voces esta com obesidade grau 1");
	}
	else if(imc >= 35 && imc <= 39.9){
		printf("Voces esta com obesidade grau 2");
	}
	else if(imc > 40){
		printf("Voces esta com obesidade grau 3");
	}
	
	getchar();
	return 0;
}
