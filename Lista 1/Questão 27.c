#include <stdio.h>

/*27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A fórmula
de conversão é: M = H * 10000, sendo M a área em metros quadrados e H a área em hectares.*/

int main(){

    float area_m2, area_hec;

        printf("Insira a area em hectares: ");
        scanf("%f", &area_hec);

        area_m2 = area_hec * 10000;

        printf("Area convertida: %.f m2\n", area_m2);

    return 0;
}
