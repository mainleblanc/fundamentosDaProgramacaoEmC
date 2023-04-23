#include <stdio.h>

/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros.*/

int main(){

    float metro, jarda;

        printf("Insira o comprimento em metros: ");
        scanf("%f", &metro);

        jarda = metro / 0.91;

        printf("Comprimiento convertido: %.2f j\n", jarda);

    return 0;
}
