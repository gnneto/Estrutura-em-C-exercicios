/*Escreva um programa que leia dois valores inteiros e efetueas seguintes operações matemáticas: 
adição, subtração, multiplicação, divisão e módulo (resto da divisão).*/

#include <stdio.h>
int main(){

	int n1, n2;

	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);

	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	printf("%d + %d = %d\n", n1, n2, n1+n2);
	printf("%d - %d = %d\n", n1, n2, n1-n2);
	printf("%d * %d = %d\n", n1, n2, n1*n2);
	printf("%d / %d = %d\n", n1 ,n2 ,n1/n2);
	printf("%d %% %d = %d\n", n1, n2,n1%n2);
	return 0;
}
