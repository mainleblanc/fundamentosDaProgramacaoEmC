#include <stdio.h>
#include <math.h>

/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área
do círculo é 𝜋 * raio2, considere = 3.14.*/

int main(){

    float raio, area_circulo;

        printf("Insira o raio: ");
        scanf("%f", &raio);

        area_circulo = 3.14 * pow(raio, 2);

        printf("Area do circulo: %.2f", area_circulo);

    return 0;
}
