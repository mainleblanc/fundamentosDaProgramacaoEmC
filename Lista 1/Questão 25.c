#include <stdio.h>

/*25. Leia um valor de �rea em acres e apresente-o convertido em metros quadrados m2. A f�rmula de
convers�o �: M = A * 4048.58, sendo M a �rea em metros quadrados e A a �rea em acres.*/

int main(){

    float area_m2, acre;

        printf("Insira a area em acres: ");
        scanf("%f", &acre);

        area_m2 = acre * 4048.58;

        printf("Area convertida: %.f m2\n", area_m2);

    return 0;
}
