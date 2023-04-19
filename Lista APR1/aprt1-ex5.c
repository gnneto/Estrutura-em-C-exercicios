#include <stdio.h>
#include <math.h>

int main() {
    int valor1, valor2, notas[5] = {100, 50, 20, 10, 5}, qtd_notas[5] = {0};

    // Lê os valores dos salários e arredonda para cima
    printf("Digite o valor do 1o salario: ");
    scanf("%d", &valor1);
    valor1 = ceil(valor1 / 5.0) * 5;

    printf("Digite o valor do 2o salario: ");
    scanf("%d", &valor2);
    valor2 = ceil(valor2 / 5.0) * 5;

    // Calcula a quantidade de notas necessárias para cada salário
    int valor_atual, valor_total;
    for (int j = 0; j < 2; j++) {
        if (j == 0) {
            valor_atual = valor1;
        } else {
            valor_atual = valor2;
        }
        valor_total = valor_atual;
        for (int i = 0; i < 5; i++) {
            qtd_notas[i] = valor_atual / notas[i];
            valor_atual = valor_atual % notas[i];
        }
        printf("PAGAMENTO SEM TROCO\n");
        printf("%do valor: R$%d\n", j + 1, valor_total);
        printf("Notas: %dxR$100; %dxR$50; %dxR$20; %dxR$10; %dxR$5\n", qtd_notas[0], qtd_notas[1], qtd_notas[2], qtd_notas[3], qtd_notas[4]);
    }

    return 0;
}
