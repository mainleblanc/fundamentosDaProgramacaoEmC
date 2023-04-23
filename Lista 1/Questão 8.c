#include <stdio.h>

/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de
conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

int main(){

    float grausC, grausK;

        printf("Insira a temperatura em Kelvins: ");
        scanf("%f", &grausK);

        grausC = grausK - 235.15;

        printf("Temperatura convertida: %.1f C\n", grausC);

    return 0;
}
