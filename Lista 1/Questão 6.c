#include <stdio.h>

/*6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula
de conversão é: F = C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

int main(){

    float grausC, grausF;

        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &grausC);

        grausF = grausC * (9.0/5.0) + 32.0;

        printf("Temperatura convertida: %.1f F\n", grausF);

    return 0;
}
