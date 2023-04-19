/*6) Escreva um algoritmo que lê dois valores booleanos (lógicos) 
e então determina se ambos são VERDADEIROS ou FALSOS.*/
#include <stdio.h>
#include <stdbool.h>

int main(){

	bool valo1, valo2;
	printf("Digite o primeiro valor (0 para FALSO e para VERDADEIRO digite qualquer numero maior que 0): ");
	scanf("%d", &valo1);

	printf("Digite o segundo valor (0 para FALSO e para VERDADEIRO digite qualquer numero maior que 0):");
	scanf("%d", &valo2);

	if (valo1 && valo2){
		printf("Ambos os valores sao verdadeiros");
		} else if(!valo1 && !valo2)
            
			printf("Ambos os valores sao FALSOS");
			
		else {
			printf("Os valores sao difirentes");
			}
	return 0;
}