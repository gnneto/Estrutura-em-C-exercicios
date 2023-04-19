#include <stdio.h>

int main(){
	float dif, soma, x, y;	
	
	printf("SISTEMA DE EQUACOES\nx + y = ");
	scanf("%f", &soma);

	printf("x - y = ");
	scanf("%f", &dif);

	x = (soma + dif) / 2;
	y = (soma - dif) / 2;

	printf("Solucao:\nx = %.6f\n",x);
	printf("y = %.6f",y);
	return 0;
}