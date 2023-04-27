#include <stdio.h>
#include <math.h>

/*12. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes fórmulas (onde h corresponde a altura):
○ Homens: (72.7 * h) - 58
○ Mulheres: (62.1 * h) - 44.7*/

int main(){

    float altura, pesoIdeal;
    char sexo;

        printf("Insira o sexo: ");
        scanf( " %c", &sexo);
        printf("Insira a altura:  ");
        scanf("%f", &altura);

        if(sexo == 'M' || sexo == 'm'){
            pesoIdeal = (72.7 * altura) - 58;
            printf("\Peso ideal: %.1f\n", pesoIdeal);
        }else if(sexo == 'F' || sexo == 'f'){
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("\Peso ideal: %.1f\n", pesoIdeal);
        }

    return 0;
}
