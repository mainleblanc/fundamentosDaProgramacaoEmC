#include <stdio.h>

/*25. Calcule as raízes da equação de 2o grau.*/

int main() {

    float a, b, c, delta, x1, x2;

        printf("Digite o valor de a: ");
        scanf("%f", &a);

        printf("Digite o valor de b: ");
        scanf("%f", &b);

        printf("Digite o valor de c: ");
        scanf("%f", &c);

        delta = b*b - 4*a*c;

        if(delta < 0){

            printf("A equacao nao possui raizes reais.\n");

        }else if(delta == 0) {

            x1 = -b/(2*a);
            printf("A equacao possui uma raiz real: %.2f\n", x1);

        }else{

            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("A equacao possui duas raizes reais:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);

        }

    return 0;

}
