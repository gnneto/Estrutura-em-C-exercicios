/*
Elabore um programa que calcule oíndicede massa corporal(IMC) de uma pessoa.
Para isso,peçaaousuáriopara digitar seupeso (em Kg) e sua altura (em m),
calcule o valor do seu IMC eimprima-o.
O IMC é determinado peladivisãodo peso da pessoa peloquadrado de sua altura.
Com peso de 61.5 Kg e altura de 1.70 m
*/

#include <stdio.h>

int main(){
	
	float peso, altura, imc;
	
	printf("Digite o seu peso em kg: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura em m: ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	printf("Valor do IMC: %f", imc);

	return 0;
}