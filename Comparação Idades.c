#include<stdio.h>
#include<stdlib.h>

void main(){
	char nome1[40], nome2[40];
	int idade1=0, idade2=0;
	
	printf("Digite o nome da primeira pessoa: ");
	scanf("%s",nome1);
	printf("Digite sua idade: ");
	scanf("%i",&idade1);
	system("pause");
	system("cls");
	
	printf("Digite o nome da segunda pessoa: ");
	scanf("%s",nome2);
	printf("Digite sua idade: ");
	scanf("%i",&idade2);
	system("pause");
	system("cls");
	
	if(idade1 > idade2){
		printf("%s, %i anos e o mais velho",nome1,idade1);
	}
	else if (idade2 > idade1) {
		printf("%s, %i anos e o mais velho",nome2,idade2);
	}
	else {
		printf("Ambos tem a mesma idade");
	}
}
