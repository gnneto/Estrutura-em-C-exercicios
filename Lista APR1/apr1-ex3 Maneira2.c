/*Elabore um programa que imprima o extrato de uma conta salárioque permite até 3 retiradas por mês.
Leia o valor do saldo inicial, o valor do salário e o valor de cada retirada, imprimindo saldos parciais e final.*/

#include <stdio.h>

int main(){
	float saldo, movimentacao;
	printf("EXTRATO BANCARIO\n");
	printf("Saldo inicial: R$ ");
	scanf("%f", &saldo);
	
	printf("Salario: R$ ");
	scanf("%f", &movimentacao);
	
	saldo += movimentacao;
	printf("Saldo parcial: R$ %.2f\n",saldo);

	printf("Primeira retirada: R$ ");
	scanf("%f", &movimentacao);
	saldo -= movimentacao;

	printf("Saldo parcial: R$ %.2f\n", saldo);
	
	printf("Segunda retirada: R$ ");
	scanf("%f", &movimentacao);
	saldo -= movimentacao;

	printf("Saldo parcial R$ %.2f\n", saldo);

	printf("Terceira retirada: R$ ");
	scanf("%f", &movimentacao);
	saldo -= movimentacao;

	printf("Saldo final: R$ %.2f\n", saldo);
	return 0;
}