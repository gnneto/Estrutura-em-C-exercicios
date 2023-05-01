/*4) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos delesestão  nos  seguintes  intervalos:  
[0-25],  [26-50],  [51-75]  e  [76-100].  A  entrada  de  dados  deve  terminar quando for lido um número negativo.  */

#include <stdio.h>

int main(){
    int num, chave[5] = {0, 0, 0, 0, 0}; // a cheve tem 5 valores, porem só vai ser usado 4.
    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num >= 0){ // Inicia o while se o valor for negativo sai do while.
        if(num >= 0 && num <= 25){ // Verifica se o numero esta dentro do intervalo
            chave[1]++;
        }else if(num >= 26 && num <= 50){
            chave[2]++;
        }else if(num >= 51 && num <= 75){
            chave[3]++;
        }else if(num >=76 && num <= 100){
            chave[4]++;
        }
        printf("Dite outro numero: ");
        scanf("%d", &num);
    }

    printf("\n\nQuantidade de numero no intervalo 0 - 25: %d\n", chave[1]); // Mostra a quantidade de numeros no primeiro intervalo.
    printf("Quantidade de numero no intervalo 26 - 50: %d\n", chave[2]); // Mostra a quantidade de numeros no segundo intervalo.
    printf("Quantidade de numero no intervalo 51 - 75: %d\n", chave[3]); // Mostra a quantidade de numeros no terceiro intervalo.
    printf("Quantidade de numero no intervalo 76 - 100: %d\n", chave[4]); // Mostra a quantidade de numeros no quarto intervalo.
return 0;
}