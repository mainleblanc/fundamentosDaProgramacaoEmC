#include <stdio.h>

/*Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão
é: M = K / 1.61 , sendo K a distância em quilômetros e M em milhas.*/

int main(){

    float km, milhas;

        printf("Insira a distância em km: ");
        scanf("%f", &km);

        milhas = km / 1.61;

        printf("Distância convertida: %.2f m\n", milhas);

    return 0;
}
