#include <stdio.h>
#include <math.h>

/*21. Fa�a um programa para verificar se um determinado n�mero inteiro � divis�vel por 3 ou 5, mas n�o simultaneamente
pelos dois.*/

int main(){

    int num = 1;

        printf("Insira um numero: ");
        scanf("%d", &num);

        if((num % 3 == 0 || num % 5 == 0) && !(num % 3 == 0 && num % 5 == 0)){

            printf("\n%d e multiplo de 3 ou 5...\n\n", num);

        }else{

            printf("\n%d nao e multiplo...\n\n", num);

        }

    return 0;
}
