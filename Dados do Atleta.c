#include<stdio.h>
#include<stdlib.h>

void main(){
	char nome[40], equipe[40];
	int idade=0;
	float peso=0, altura=0, salario=0;
	
	printf("\nDados do Atleta\n");
	printf("\nNome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("\nEquipe: ");
	scanf("%s",equipe);
	fflush(stdin);
	printf("\nIdade: ");
	scanf("%i",&idade);
	printf("\nPeso: ");
	scanf("%f",&peso);
	printf("\nAltura: ");
	scanf("%f",&altura);
	printf("\nSalario: ");
	scanf("%f",&salario);
	
	system("pause");
	system("cls");
	
	printf("\nDados do Atleta:\n");
	printf("\nNome: %s",nome);
	printf("\nEquipe: %s",equipe);
	printf("\nIdade: %i",idade);
	printf("\nPeso: %.3f",peso);
	printf("\nAltura: %.2f",altura);
	printf("\nSalario: %.2f\n",salario);
	
	system("pause");
}
