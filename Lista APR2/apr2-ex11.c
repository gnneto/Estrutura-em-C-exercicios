 /*11) Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o preço normal  deetiqueta  e  a  escolha  da  condição  de  pagamento. 
Utilize  os  códigos  da  tabela  a  seguir  para ler qual acondição de pagamento escolhida e efetuar o cálculo adequado.*/

#include <stdio.h>

int main(){
    char pag_opcao, continuar;
    int opcUsuario;
    float valorEtiqueta, desconto, juros;

    do{

    printf("Qual o valor do produto: ");
    scanf("%f", &valorEtiqueta);

    printf("Escolha a opcao de pagamento\n1 - A vista em dinheiro ou cheque\n2 - A vista no cartao de credito\n3 - Em duas vezes (sem juros)\n4 - Em duas vezes (com juros)\nDigite uma opcao: ");
    scanf("%d", &opcUsuario);

    switch (opcUsuario){
        case 1:
            desconto = valorEtiqueta * 0.10;
            desconto = valorEtiqueta - desconto;
            printf("O pagamento vai ser a vista em dinheiro ou cheque. O cliente tem direito a 10%% de desconto\nValor com desconto: R$ %.2f", desconto);
            break;
        case 2:
            desconto = valorEtiqueta * 0.15;
            desconto = valorEtiqueta - desconto;
            printf("O pagamento vai ser no cartao de credito. O cliente tem direito a 15%% de desconto\nValor com desconto: R$ %.2f", desconto);
            break;
        
        
        case 3:
            printf("O pagamento vai ser em duas vezes. O cliente nao tem direito a nenhum desconto.\nValor: %.2f", valorEtiqueta);
            break;

        case 4:
            juros = valorEtiqueta * 0.10;
            juros = valorEtiqueta + juros;
            printf("O pagamento vai ser em duas vezes com juros de 10%%\nPagamento com 10%% de juros: %.2f", juros);
            break;


        default:
            printf("Entrada invalida");
            break;
    }
        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        strupr(&continuar);
    }
    
    while (continuar == 'S');    

    
    return 0;
}



