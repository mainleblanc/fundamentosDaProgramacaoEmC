#include <stdio.h>

/*Leia um valor de comprimento em cent�metros e apresente-o convertido em polegadas. A f�rmula
de convers�o �: P = C / 2.54 , sendo C o comprimento em cent�metros e P o comprimento em polegadas.*/

int main(){

    float inch, cm;

        printf("Insira o comprimento em cm: ");
        scanf("%f", &cm);

        inch = cm / 2.54;

        printf("Comprimento convertido: %.2f ''\n", inch);

    return 0;
}
