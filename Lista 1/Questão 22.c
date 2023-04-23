#include <stdio.h>

/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.*/

int main(){

    float metro, jarda;

        printf("Insira o comprimento em jardas: ");
        scanf("%f", &jarda);

        metro = 0.91 * jarda;

        printf("Comprimiento convertido: %.2f m\n", metro);

    return 0;
}
