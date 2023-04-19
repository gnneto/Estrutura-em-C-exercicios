#include <stdio.h>

int main(){
	int a, b, c, soma;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);

	printf("Digite o segundo valor: " );
	scanf("%d", &b);

	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	soma = a+b;
    printf("%d + %d = %d", a,b,soma);
	if(soma < c){
		printf("\n%d + %d eh menor que %d", a,b,c);
		
		}
    else{
        printf("\n%d + %d NAO eh menor que %d.",a,b,c);
    }	
	
	return 0;
}