#include <stdio.h>
#include <math.h>

/*6. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
○ O número digitado ao quadrado
○ A raiz quadrada do número digitado*/

int main(){

    float num;

        printf("Insira um numero:  ");
        scanf("%f", &num);

        if(num > 0){
            printf("\nNumero ao quadrado: %.2f...\n", pow(num, 2));
            printf("\nRaiz quadrada: %.2f...\n", sqrt(num));
        }

    return 0;
}
