#include <stdio.h>

/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A f�rmula de
convers�o �: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

int main(){

    float grausC, grausK;

        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &grausC);

        grausK = grausC + 235.15;

        printf("Temperatura convertida: %.2f K\n", grausK);

    return 0;
}
