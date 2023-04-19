/*5)  Encontrar  o  dobro  de  um  número  caso  ele  seja  positivo 
e  o  seu  triplo  caso  seja  negativo, imprimindo o resultado.*/

#include <stdio.h>

int main(){
	
	int n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);

	if(n1>0){
		n2 = n1*2;
		printf("O dobro de %d eh %d", n1, n2);
		} else{
			n2 = n1*3;
			printf("O triplo de %d eh %d", n1, n2);
			}	
	return 0;
}