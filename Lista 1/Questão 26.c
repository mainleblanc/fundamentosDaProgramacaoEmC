#include <stdio.h>

/*26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A fórmula
de conversão é: H = M * 0.0001, sendo M a área em metros quadrados e H a área em hectares.*/

int main(){

    float area_m2, area_hec;

        printf("Insira a area em m2: ");
        scanf("%f", &area_m2);

        area_hec = area_m2 * 0.0001;

        printf("Area convertida: %.f h\n", area_hec);

    return 0;
}
