#include <stdio.h>

/*20. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as
básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois
valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

int main(){

    float num1, num2;
    int opcao;

    printf("-----MENU DE OPERACOES-----\n \n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n");
    printf("\nEscolha uma opcao acima: ");
    scanf("%d", &opcao);

    printf("Insira dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch(opcao){

        case 1:
            printf("\n\nA soma dos valores e: %.1f\n\n", num1 + num2);
            break;

        case 2:
            printf("\n\nA subtracao dos valores e: %.1f\n\n", num1 - num2);
            break;

        case 3:
            printf("\n\nA multiplicacao dos valores e: %.1f\n\n", num1 * num2);
            break;

        case 4:
            printf("\n\nA divisao dos valores e: %.1f\n\n", num1 / num2);
            break;

        default:
            printf("\n\n--------------Insira um numero valido!---------------");
    }

    return 0;
}
