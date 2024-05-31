#include<stdio.h>
#include<stdlib.h>

void main(){
	char nome[40], profissao[30], curso[30], email[30], telefone[18], cpf[15];
	int idade=0;
	float altura=0, salario=0, peso=0;
	
	printf("\nDados Cadastrais\n");
	printf("\nNome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("\nEmail: ");
	scanf("%s",email);
	printf("\nTelefone: ");
	scanf("%s",telefone);
	printf("\nProfissao: ");
	scanf("%s",profissao);
	printf("\nCurso: ");
	scanf("%s",curso);
	fflush(stdin);
	printf("\nCPF: ");
	scanf("%s",cpf);
	printf("\nIdade: ");
	scanf("%i",&idade);
	printf("\nAltura: ");
	scanf("%f",&altura);
	printf("\nPeso: ");
	scanf("%f",&peso);
	printf("\nSalario: ");
	scanf("%f",&salario);
	
	system("pause");
	system("cls");
	
	printf("\nDados Cadastrais:\n");
	printf("\nNome: %s",nome);
	printf("\nEmail: %s",email);
	printf("\nTelefone: %s",telefone);
	printf("\nProfissao: %s",profissao);
	printf("\nCurso: %s",curso);
	printf("\nCPF: %s",cpf);
	printf("\nIdade: %i",idade);
	printf("\nAltura: %.2f",altura);
	printf("\nPeso: %.3f",peso);
	printf("\nSalario: %.2f\n",salario);
	
	system("pause");
}
