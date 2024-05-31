#include<stdio.h>
#include<stdlib.h>

void main(){
	char nome[40], profissao[30], curso[30], email[30], telefone[18];
	int idade=0;
	
	printf("\nDados Pessoais\n");
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
	printf("\nIdade: ");
	scanf("%i",&idade);
	
	system("pause");
	system("cls");
	
	printf("\nDados Pessoais:\n");
	printf("\nNome: %s",nome);
	printf("\nEmail: %s",email);
	printf("\nTelefone: %s",telefone);
	printf("\nProfissao: %s",profissao);
	printf("\nCurso: %s",curso);
	printf("\nIdade: %i\n",idade);
	
	system("pause");
}
