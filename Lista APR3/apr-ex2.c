/*2)  Desenvolver  um  algoritmo  que  leia  a  altura  de  15  pessoas.  Este  programa  deverá  calcular  emostrar :
a. A menor altura do grupo  <--->  b. A maior altura do grupo;*/


#include <Stdio.h>

int main(){

    float altura, maior = 0, menor, cont;

    for(cont = 1; cont <= 15; cont++){
        printf("Digite uma altura: ");
        scanf("%f", &altura);
        if(altura > maior){
            maior = altura;
        }else{
            menor = altura;
        }
    }
    printf("\n\nA maior altura eh: %.2f\nE a menor altura eh: %.2f", maior, menor);


return 0;
}