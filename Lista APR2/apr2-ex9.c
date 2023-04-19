/*9) Tendo  como  dados  de  entrada  a  altura  e  o  sexo  de  uma  pessoa,
construa  um  algoritmo  quecalcule seu peso ideal, utilizando as seguintes fórmulas:
●para homens: (72.7 * h) – 58;
●para mulheres: (62.1 * h) – 44.7.*/

#include <stdio.h>

int main(){
	char sexo;
	float altura;

	printf("Informe seu sexo (M/F): ");
	scanf("%c", &sexo);
	
	printf("Informe a sua altura: ");
	scanf("%f", &altura);

	sexo = toupper(sexo);
	if(sexo == 'F'){
		printf("O peso ideia para uma mulher da sua altura eh: %.2f Kg\n", (62.1 * altura ) - 44.7);	
		} else{
			printf("O peso ideia para um homem da sua altura eh: %.2f Kg\n", (72.7 * altura) - 58);
			}
	return 0;
}