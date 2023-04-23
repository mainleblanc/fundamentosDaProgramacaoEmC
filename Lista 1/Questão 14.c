#include <stdio.h>

/*14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G
* 𝜋 /180, sendo G o ângulo em graus e R em radianos e 𝜋 = 3.14.*/

int main(){

    float graus, rad;

        printf("Insira o angulo em graus: ");
        scanf("%f", &graus);

        rad = graus * 3.14/180;

        printf("Angulo convertido: %.2f \n", rad);

    return 0;
}
