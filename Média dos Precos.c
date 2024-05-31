#include<stdio.h>
#include<stdlib.h>

void main(){
	
	char produto1[30], produto2[30], produto3[30], produto4[30];
	float preco1=0, preco2=0, preco3=0, preco4=0, soma=0, media=0;
	
	printf("\nDigite o nome do primeiro produto: ");
	scanf("%s",produto1);
	fflush(stdin);
	printf("Agora digite seu preco: ");
	scanf("%f",&preco1);
	system("pause");
	system("cls");
	
	printf("\nDigite o nome do segundo produto: ");
	scanf("%s",produto2);
	fflush(stdin);
	printf("Agora digite seu preco: ");
	scanf("%f",&preco2);
	system("pause");
	system("cls");
	
	printf("\nDigite o nome do terceiro produto: ");
	scanf("%s",produto3);
	fflush(stdin);
	printf("Agora digite seu preco: ");
	scanf("%f",&preco3);
	system("pause");
	system("cls");
	
	printf("\nDigite o nome do quarto produto: ");
	scanf("%s",produto4);
	fflush(stdin);
	printf("Agora digite seu preco: ");
	scanf("%f",&preco4);
	system("pause");
	system("cls");
	
	soma = (preco1 + preco2 + preco3 + preco4);
	media = (soma/4);
	
	printf("Resultados\n");
	printf("\n%s, R$ %.2f",produto1,preco1);
	printf("\n%s, R$ %.2f",produto2,preco2);
	printf("\n%s, R$ %.2f",produto3,preco3);
	printf("\n%s, R$ %.2f\n",produto4,preco4);
	printf("\nA soma dos precos e %.2f",soma);
	printf("\nA media dos precos e %.2f\n",media);
	system("pause");
}
