#include <stdio.h>
#include <math.h>

/*7. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/

int main(){

    int num;

        printf("Insira um numero:  ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("\nNumero e par\n");
        }else{
            printf("\nNumero impar\n");
        }

    return 0;
}
