#include <stdio.h>

/*17. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este n�mero. Isto �, domingo se 1, segunda-feira se 2, e assim por diante.*/

int main(){

    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("\nDomingo\n");
            break;
        case 2:
            printf("\nSegunda-feira\n");
            break;
        case 3:
            printf("\nTer�a-feira\n");
            break;
        case 4:
            printf("\nQuarta-feira\n");
            break;
        case 5:
            printf("\nQuinta-feira\n");
            break;
        case 6:
            printf("\nSexta-feira\n");
            break;
        case 7:
            printf("\nS�bado\n");
            break;
        default:
            printf("\nNumero invalido\n");
    }

    return 0;
}
