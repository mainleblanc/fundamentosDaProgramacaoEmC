#include <stdio.h>

/*26. Leia um valor de �rea em metros quadrados m2 e apresente-o convertido em hectares. A f�rmula
de convers�o �: H = M * 0.0001, sendo M a �rea em metros quadrados e H a �rea em hectares.*/

int main(){

    float area_m2, area_hec;

        printf("Insira a area em m2: ");
        scanf("%f", &area_m2);

        area_hec = area_m2 * 0.0001;

        printf("Area convertida: %.f h\n", area_hec);

    return 0;
}
