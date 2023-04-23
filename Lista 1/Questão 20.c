#include <stdio.h>

/*20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K / 0.45 , sendo K a massa em quilogramas e L a massa em libras.*/

int main(){

    float massa_kg, libra;

        printf("Insira a massa em kg: ");
        scanf("%f", &massa_kg);

        libra = massa_kg / 0.45;

        printf("Massa convertida: %.2f lbs\n", libra);

    return 0;
}
