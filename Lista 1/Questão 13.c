#include <stdio.h>

/*Leia uma dist�ncia em quil�metros e apresente-a convertida em milhas. A f�rmula de convers�o
�: M = K / 1.61 , sendo K a dist�ncia em quil�metros e M em milhas.*/

int main(){

    float km, milhas;

        printf("Insira a dist�ncia em km: ");
        scanf("%f", &km);

        milhas = km / 1.61;

        printf("Dist�ncia convertida: %.2f m\n", milhas);

    return 0;
}
