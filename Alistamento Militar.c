#include<stdio.h>
#include<stdlib.h>

void main(){
	int idade=0, sexo=0;
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite seu sexo ([1] para masculino e [2] para feminino): ");
	scanf("%i",&sexo);
	
	system("pause");
	system("cls");
	
	if(sexo == 1){
		
		if(idade >= 18) {
			printf("Alistamento militar obrigatorio");
		}
		else {
			printf("Voce nao pode fazer alistamento militar");
		}
	}
	else if (sexo == 2){
		
		if(idade >= 18){
		printf("Alistamento militar facultativo");
		}
		else {
			printf("Você nao pode fazer alistamento militar");
		}
	}
	else {
	printf("%i nao e uma opcao valida",sexo);
	}
	
	getchar();
}
