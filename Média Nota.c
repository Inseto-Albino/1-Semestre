#include<stdio.h>
#include<stdlib.h>

void main(){
	float nota1=0, nota2=0, nota3=0, media=0;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	system("pause");
	system("cls");
	
	if(media > 7){
		printf("Parabens! Voce foi aprovado!");
	}
	else {
		printf("Voce foi reprovado...");
	}
}
