#include <stdio.h>

/*Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. A f�rmula de convers�o
�: K = 1.61 * M, sendo K a dist�ncia em quil�metros e M em milhas.*/

int main(){

    float km, milhas;

        printf("Insira a dist�ncia em milhas: ");
        scanf("%f", &milhas);

        km = 1.61 * milhas;

        printf("Dist�ncia convertida: %.2f km\n", km);

    return 0;
}
