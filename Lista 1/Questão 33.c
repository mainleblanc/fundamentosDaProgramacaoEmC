#include <stdio.h>
#include <math.h>

/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

int main(){

    float lado, area;

        printf("Insira um valor para o lado: ");
        scanf("%f", &lado);

        area = pow(lado, 2);

        printf("Area do quadrado: %.2f", area);

    return 0;
}
