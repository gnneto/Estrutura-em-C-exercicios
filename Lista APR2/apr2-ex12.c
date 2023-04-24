/*
12) Escreva um algoritmo que leia o número de identificação,
as 3 notas obtidas por um aluno nas 3  verificações  e  a  média  dos  exercícios  que  fazem  parte  da  avaliação,
e  calcule  a  média  de  aproveitamento, usando a fórmula: MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7 */
#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media, aproveitamento;
    int ident;
    char conceito;

    printf("Qual eh o seu numero de identificacao? ");
    scanf("%d", &ident);

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    printf("Qual a media dos execicios? ");
    scanf("%f", &media);

    aproveitamento = (nota1 + nota2*2+nota3*3 + media)/7;

    if(aproveitamento >= 9.0){
        conceito = 'A';        
    } else if(aproveitamento >= 7.5 && aproveitamento < 9.0){
        conceito = 'B';
    } else if(aproveitamento >= 6.0 && aproveitamento < 7.5){
        conceito = 'C';
    } else if(aproveitamento >= 4.0 && aproveitamento < 6.0){
        conceito = 'D';
    } else if(aproveitamento < 40){
        conceito = 'E';
    }

    printf("\n\n\nIdentificacao: %d\nNota 1: %.1f\nNota 2: %.1f\nNota 3: %.1f\nAproveitamento: %.1f\nConceito: %c\n", ident,nota1,nota2,nota3,aproveitamento,conceito);
    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("APROVADO.");
    } else {
        printf("REPROVADO.");
    }

    return 0;
}