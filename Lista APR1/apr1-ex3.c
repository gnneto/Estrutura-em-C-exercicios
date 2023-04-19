#include <stdio.h>

int main() {
    float saldo, movimentacao;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldo);

    printf("Digite o valor do salário: ");
    scanf("%f", &movimentacao);
    saldo += movimentacao;

    printf("Digite o valor da primeira retirada: ");
    scanf("%f", &movimentacao);
    saldo -= movimentacao;

    printf("Digite o valor da segunda retirada: ");
    scanf("%f", &movimentacao);
    saldo -= movimentacao;

    printf("Digite o valor da terceira retirada: ");
    scanf("%f", &movimentacao);
    saldo -= movimentacao;

    printf("\n--- Extrato ---\n");
    printf("Saldo inicial: R$ %.2f\n", saldo + movimentacao);
    printf("Salário: R$ %.2f\n", movimentacao);
    printf("Retirada 1: R$ %.2f\n", -movimentacao);
    printf("Retirada 2: R$ %.2f\n", -movimentacao);
    printf("Retirada 3: R$ %.2f\n", -movimentacao);
    printf("Saldo final: R$ %.2f\n", saldo);

    return 0;
}
