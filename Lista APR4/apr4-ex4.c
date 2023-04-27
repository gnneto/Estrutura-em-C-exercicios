/*Elabore um algoritmo que solicite o usuario entre com dois numeros (inicial e final). 
Ao final o algoritimo devera apresentar o valor total da soma de todos os numeros do intervalo digitado pelo usuario.*/

#include <stdio.h>

int main() {
    int inicial, final, soma = 0, contr;
    
    printf("Digite o número inicial: ");
    scanf("%d", &inicial);
    
    printf("Digite o número final: ");
    scanf("%d", &final);

    for(contr = inicial; contr <= final; contr++) {
        soma += contr;
    }

    printf("\nA soma dos números no intervalo %d, %d eh: %d", inicial, final, soma);

    return 0;
}
