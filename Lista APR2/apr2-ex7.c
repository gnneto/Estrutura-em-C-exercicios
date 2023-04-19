/*7)Faça um algoritmo que leia uma variável e some 5  
caso seja par ou some 8 caso seja ímpar,imprimir o resultado desta operação. */

#include <stdio.h>

int main(){
	int n1, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	soma = n1 % 2;
	

    while (n1 < 0){
		printf("Digite apenas numeros positivos.\nNovo numero: ");
        scanf("%d", &n1);
		}

	if ( soma == 0 ){
		n1 += 5;
		printf("O numero eh par, e o resultado da soma eh %d", n1);
	
	} else{
		n1 += 8;
		printf("O nuemro eh impar e o resultado da soma eh %d",n1);	
	}

	return 0;
}