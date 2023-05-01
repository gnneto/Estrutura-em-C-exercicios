/*1) Desenvolver um algoritmo que efetue a soma de todos os números ímpares 
que são múltiplos detrês e que se encontram no conjunto dos números de 1 até 500. */


#include <stdio.h>

int main(){
    
    int soma = 0;

    for(int i = 1; i <= 500; i++){
        if(i % 2 != 0 && i % 3 == 0){
            soma += i;
        }
    }
    printf("A soma dos numeros impares de 1 ate 500 eh: %d", soma);

    return 0;
}