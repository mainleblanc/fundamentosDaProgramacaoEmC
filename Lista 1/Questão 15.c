#include <stdio.h>

/*15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R
* 180 / 𝜋, sendo G o ângulo em graus e R em radianos e 𝜋 = 3.14.*/

int main(){

    float graus, rad;

        printf("Insira o angulo em rad: ");
        scanf("%f", &rad);

        graus = rad * 180/3.4;

        printf("Angulo convertido: %.2f \n", graus);

    return 0;
}
