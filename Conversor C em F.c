#include<stdio.h>
#include<stdlib.h>

void main(){
	
	float celsius=0, fahrenheit=0;
	
	printf("Conversor Celsius => Fahrenheit\n");
	printf("\nDigite a temperatura em celsius(C): ");
	scanf("%f",&celsius);
	
	system("cls");
	
	fahrenheit = ((celsius * 9/5) + 32);
	
	printf("A temperatura em fahrenheit(F) e: %.2f F\n",fahrenheit);
	
	system("pause");
}
