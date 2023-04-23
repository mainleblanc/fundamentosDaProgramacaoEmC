#include <stdio.h>
#include <math.h>

/*35. Sejam a e b os catetos de um triângulo retângulo, faça um programa que receba os valores de a e
b e calcule o valor da hipotenusa. Imprima o resultado.*/

int main(){

    float a, b, hipotenusa;

        printf("Digite o valor de a: ");
        scanf("%f", &a);
        printf("Digite o valor de b: ");
        scanf("%f", &b);

        hipotenusa = sqrt(pow(a, 2) + pow(b, 2));

        printf("\Hipotenusa e %.2f\n", hipotenusa);

    return 0;
}
