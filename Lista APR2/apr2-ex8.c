/*8)  Escreva  um  algoritmo  que  leia  três  valores  inteiros  e  diferentes  e  mostre-os  em  ordemdecrescente. */


#include <stdio.h>

int main() {
    int nu123[3], xq, yq, temp;

    // Recebe os três valores inteiros distintos do usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &nu123[0]);

    printf("Digite o segundo numero: ");
    scanf("%d", &nu123[1]);

    printf("Digite o terceiro numero: ");
    scanf("%d", &nu123[2]);

    // Ordena o vetor em ordem decrescente usando o algoritmo "bubble sort"
    for (xq = 0; xq < 3; xq++) {
        for (yq = 0; yq < 2; yq++) {
            if (nu123[yq] < nu123[yq+1]) {
                temp = nu123[yq];
                nu123[yq] = nu123[yq+1];
                nu123[yq+1] = temp;
            }
        }
    }

    // Exibe os valores em ordem decrescente
    printf("%d %d %d", nu123[0], nu123[1], nu123[2]);

    return 0;
}
