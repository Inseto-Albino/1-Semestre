#include<stdio.h>
#include<stdlib.h>

void main(){
	float media=0, frequencia=0;
	
	printf("Digite a media do aluno: ");
	scanf("%f",&media);
	printf("Digite a frequencia do aluno: ");
	scanf("%f",&frequencia);
	
	system("pause");
	system("cls");
	
	if(media >= 7 && frequencia >= 75){
		printf("O aluno foi aprovado!");		
	}
	else {
		printf("O aluno foi reprovado");
	}
	getchar();
}
