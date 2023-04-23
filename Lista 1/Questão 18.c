#include <stdio.h>

/*18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de
conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.*/

int main(){

    float vol_m3, litros;

        printf("Insira o volume em m3: ");
        scanf("%f", &vol_m3);

        litros = 1000 * vol_m3;

        printf("Volume convertido: %.2f l\n", litros);

    return 0;
}
