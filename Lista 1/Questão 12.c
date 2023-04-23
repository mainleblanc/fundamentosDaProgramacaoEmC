#include <stdio.h>

/*Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão
é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas.*/

int main(){

    float km, milhas;

        printf("Insira a distância em milhas: ");
        scanf("%f", &milhas);

        km = 1.61 * milhas;

        printf("Distância convertida: %.2f km\n", km);

    return 0;
}
