#include <stdio.h>

/*19. Leia um valor de volume em litros e apresente-o convertido em metros c�bicos m3. A f�rmula de
convers�o �: M olume em metros c�bicos.*/

int main(){

    float vol_m3, litros;

        printf("Insira o volume em litros: ");
        scanf("%f", &litros);

        vol_m3 = litros / 1000;

        printf("Volume convertido: %.2f m\n", vol_m3);

    return 0;
}
