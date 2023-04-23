#include <stdio.h>

/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A fórmula de
conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.*/

int main() {

    double metrosQuadrados, acres;

        printf("Digite a área em metros quadrados: ");
        scanf("%lf", &metrosQuadrados);

        acres = metrosQuadrados * 0.000247;

        printf("A área em acres é %.2lf", acres);

    return 0;
}
