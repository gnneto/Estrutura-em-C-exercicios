/*elabore um algoritimo que solicite que o usuario tentre com 300 numero quaisquer. Ao final apresente separadamente:
a. A soma dos 100 primeiros numeros digitados
b. A soma dos 101 nuemros ate o 200
c. A soma dos 201 numeros até o 300*/


#include <stdio.h>

int main() {
    int numeros[300], soma1 = 0, soma2 = 0, soma3 = 0, contr;

    // Loop para receber os 300 números
    for(contr = 0; contr < 300; contr++) {
        printf("Digite o %d° número: ", contr+1);
        scanf("%d", &numeros[contr]);

        // Verifica em qual intervalo o número se encontra e adiciona à soma correspondente
        if(contr < 100) {
            soma1 += numeros[contr];
        } else if(contr >= 100 && contr < 200) {
            soma2 += numeros[contr];
        } else {
            soma3 += numeros[contr];
        }
    }

    // Imprime as somas
    printf("\nSoma dos 100 primeiros números: %d\n", soma1);
    printf("Soma dos números de 101 a 200: %d\n", soma2);
    printf("Soma dos números de 201 a 300: %d\n", soma3);

    return 0;
}
