#include<stdio.h>
#include<stdlib.h>

void main(){
	
	float celsius=0, fahrenheit=0;
	
	printf("Conversor Fahrenheit => Celsius\n");
	printf("\nDigite a temperatura em fahrenheit(F): ");
	scanf("%f",&fahrenheit);
	
	system("cls");
	
	celsius = ((fahrenheit - 32.0) * 5/9);
	
	printf("A temperatura em celsius(C) e: %.2f C\n",celsius);
	
	system("pause");
}
