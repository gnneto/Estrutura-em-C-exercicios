/* IMC -> Elabore  um  algoritmo  que  leia  o  peso  e  a  altura  de  um  adulto  e  mostre  sua  condição  de  acordo  com a tabela abaixo. 
Abaixo de 18,5 -> Abaixo do peso || Entre 18,5 e 25 -> Peso normal || Entre 25 e 30 -> Acima do peso || Acima de 30 -> obeso */


#include <stdio.h>

int main(){
	int peso;
	float altura, imc;
		
	printf("Digite sua altura: ");
	scanf("%f", &altura);

	printf("Digite seu peso: ");
	scanf("%d", &peso);

	imc = peso /(altura * altura);

	if(imc <= 18.5){
		printf("Seu IMC eh %.2f \nVoce esta abaixo do peso\n", imc);
		}
	if(imc >= 18.5 && imc <= 24.9){
		printf("Seu IMC eh %.2f \nVoce esta no peso ideal\n", imc);		
		}
	if(imc >= 25 && imc <= 29.9){
		printf("Seu IMC eh %.2f \nVoce esta acima do peso\n", imc);
		}
	if(imc > 30 && imc <=39.9){
		printf("Seu IMC eh %.2f \nVoce esta obeso\n", imc);
		}
    if(imc > 40){
        printf("Seu IMC eh %.2f \nVoce esta com obesidade GRAVE");
    }


	return 0;
}