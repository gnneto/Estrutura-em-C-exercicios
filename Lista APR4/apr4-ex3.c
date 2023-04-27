/*elabore um algoritimo em que o usuario entra com um numero inteiro 
qualquer e o program imprima os 20 numeros subsequentes ao que foi digitado*/


#include <stdio.h>

int main() {
    int num, contr;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nOs 20 numeros subsequentes sao:\n");
    for(contr = num+1; contr <= num+20; contr++) {
        printf("%d\n", contr);
    }
    return 0;
}