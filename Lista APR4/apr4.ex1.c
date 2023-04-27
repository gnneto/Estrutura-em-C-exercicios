/*elabore um algoritimo que solicite que o usuario entre
com 100 numeros inteiros quaisquer. Imprima a soma dos numeros digitados*/

#include <stdio.h>

int main(){

    int numeros, soma = 0, valor;

    for(numeros = 1; numeros <= 100; numeros++){
        //printf("Digite um valor: "); scanf("%d", &valor); soma += valor;
        soma += numeros;
    }
    printf("%d\n",soma);

return 0;
}
