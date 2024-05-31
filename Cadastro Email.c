#include<stdio.h>
#include<stdlib.h>

void main(){
	char email[30], senha[10];
	
	printf("\nCadastro Email\n");
	printf("\nEmail: ");
	scanf("%s",email);
	printf("\nSenha: ");
	scanf("%s",senha);
	
	system("pause");
	system("cls");
	
	printf("\nCadastro Email:\n");
	printf("\nEmail: %s",email);
	printf("\nSenha: %s\n",senha);
	
	system("pause");
}
