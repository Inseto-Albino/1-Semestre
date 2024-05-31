#include<stdio.h>
#include<stdlib.h>

void main(){
	
	char nome1[40], nome2[40], nome3[40];
	int idade1=0, idade2=0, idade3=0, soma=0;
	float media=0;
	
	printf("\nDigite o nome da primeira pessoa: ");
	scanf("%s",nome1);
	fflush(stdin);
	printf("Agora digite sua idade: ");
	scanf("%i",&idade1);
	system("pause");
	system("cls");
	
	printf("\nDigite o nome da segunda pessoa: ");
	scanf("%s",nome2);
	fflush(stdin);
	printf("Agora digite sua idade: ");
	scanf("%i",&idade2);
	system("pause");
	system("cls");
	
	printf("\nDigite o nome da terceira pessoa: ");
	scanf("%s",nome3);
	fflush(stdin);
	printf("Agora digite sua idade: ");
	scanf("%i",&idade3);
	system("pause");
	system("cls");
	
	soma = (idade1 + idade2 + idade3);
	media = (soma/3);
	
	printf("Resultados\n");
	printf("\n%s, %i anos",nome1,idade1);
	printf("\n%s, %i anos",nome2,idade2);
	printf("\n%s, %i anos\n",nome3,idade3);
	printf("\nA soma das idades e %i",soma);
	printf("\nA media das idades e %.2f\n",media);
	system("pause");
}
