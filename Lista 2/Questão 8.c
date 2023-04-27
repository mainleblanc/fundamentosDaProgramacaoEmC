#include <stdio.h>
#include <math.h>

/*8. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como
a diferença existente entre ambos.*/

int main(){

    int num1, num2, diferenca;

        printf("Insira um numero:  ");
        scanf("%d", &num1);
        printf("Insira outro numero:  ");
        scanf("%d", &num2);

        if(num1 > num2){
            printf("\nNumero maior: %d", num1);
            diferenca = num1 - num2;
        }else{
            printf("\nNumero maior: %d"), num2;
            diferenca = num2 - num1;
        }

        printf("\nA diferenca e: %d\n", diferenca);

    return 0;
}
