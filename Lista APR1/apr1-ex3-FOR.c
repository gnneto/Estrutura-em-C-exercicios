#include <stdio.h>

int main(){
	
	float saldo, movimentacao;
	printf("EXTRATO BANCARIO\n");

	printf("Saldo inicial: R$ ");
	scanf("%f", &saldo);
	
	printf("Salario: R$ ");
	scanf("%f", &movimentacao);

	saldo += movimentacao;
	printf("Saldo parcial: R$ %.2f\n", saldo);

	for (int d = 1; d <= 3; d++){
		printf("%da retirada: R$ ", d);
		scanf("%f", &movimentacao);
		saldo -= movimentacao;
		printf("Saldo parcial: R$ %.2f\n", saldo);
		}
	printf("\nSaldo final: R$ %.2f",saldo);
	return 0;
}