#include <stdio.h>

/*24. Leia um valor de �rea em metros quadrados m2 e apresente-o convertido em acres. A f�rmula de
convers�o �: A = M * 0.000247, sendo M a �rea em metros quadrados e A a �rea em acres.*/

int main() {

    double metrosQuadrados, acres;

        printf("Digite a �rea em metros quadrados: ");
        scanf("%lf", &metrosQuadrados);

        acres = metrosQuadrados * 0.000247;

        printf("A �rea em acres � %.2lf", acres);

    return 0;
}
