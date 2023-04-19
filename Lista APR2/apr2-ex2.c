/*
2) Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa.
Caso sexo seja “F” eestado civil seja “CASADA”, solicitar o tempo de casada (anos).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	char nome[50], sexo, est_civil[50];
	int anos;

	printf("Informe seu nome: ");
	scanf("%s", nome);

	printf("Informe seu sexo. (M/F): ");
	scanf(" %c", &sexo);

	printf("Informe seu estado civil: ");
	scanf("%s", est_civil); 

	strupr(est_civil);
	strupr(&sexo);
	if( strcmp(est_civil, "CASADA") == 0 && sexo == 'F' ){
		printf("Por favor, informe ha quantos anos voce esta casada: ");
		scanf("%d", &anos);
		printf("INFORMACOES\nNome: %s\nSexo: %c\nEstado civil: %s\nTempo de uniao conjugal: %d anos", nome,sexo, est_civil, anos);
		}
	
	return 0;
}