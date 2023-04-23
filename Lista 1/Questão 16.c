#include <stdio.h>

/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula
de conversão é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

int main(){

    float inch, cm;

        printf("Insira o comprimento em polegadas: ");
        scanf("%f", &inch);

        cm = inch * 2.54;

        printf("Comprimento convertido: %.2f cm\n", cm);

    return 0;
}
