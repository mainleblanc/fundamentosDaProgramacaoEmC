#include <stdio.h>

/*17. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.*/

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
            printf("\nTerça-feira\n");
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
            printf("\nSábado\n");
            break;
        default:
            printf("\nNumero invalido\n");
    }

    return 0;
}
