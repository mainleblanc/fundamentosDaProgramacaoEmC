#include <stdio.h>

/*21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.*/

int main(){

    float massa_kg, libra;

        printf("Insira a massa em libras: ");
        scanf("%f", &libra);

        massa_kg = libra * 0.45;

        printf("Massa convertida: %.2f kg\n", massa_kg);

    return 0;
}
