#include <stdio.h>

/*7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A f�rmula
de convers�o �: C = 5.0 (F * 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em
Fahrenheit.*/

int main(){

    float grausC, grausF;

        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%f", &grausF);

        grausC = (grausF - 32.0) / (9.0/5.0);

        printf("Temperatura convertida: %.f C\n", grausC);

    return 0;
}
