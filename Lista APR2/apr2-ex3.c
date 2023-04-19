/*3) Faça um algoritmo para receber um número qualquer
e informar na tela se é par ou ímpar.*/


#include <stdio.h>

int main(){
	
	int n1;

	printf("Digite um numero: ");
	scanf("%d", &n1);

	if(n1 % 2 == 0){
		printf("O numero %d eh par.\n",n1);
		}
    else{
        printf("O numero %d eh impar.\n", n1);
    }
	return 0;

}