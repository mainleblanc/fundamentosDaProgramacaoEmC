#include <stdio.h>

/*18. Leia um valor de volume em metros c�bicos m3 e apresente-o convertido em litros. A f�rmula de
convers�o �: L = 1000 * M, sendo L o volume em litros e M o volume em metros c�bicos.*/

int main(){

    float vol_m3, litros;

        printf("Insira o volume em m3: ");
        scanf("%f", &vol_m3);

        litros = 1000 * vol_m3;

        printf("Volume convertido: %.2f l\n", litros);

    return 0;
}
